[private]
default:
    @just --list --unsorted

config := absolute_path('config')
build := absolute_path('.build')
out := absolute_path('firmware')
draw := absolute_path('draw')

build_matrix := "build.yaml"

# parse build.yaml and filter targets by expression
_parse_targets $expr: _check_yq_version
    #!/usr/bin/env bash
    attrs="[.board, .shield, .snippet, .\"artifact-name\", .\"cmake-args\"]"
    filter="(($attrs | map(. // [.]) | combinations), ((.include // {})[] | $attrs)) | join(\",\")"
    echo "$(yq -r "$filter" {{build_matrix}} | grep -v "^," | grep -i "${expr/#all/.*}")"

# build firmware for single board & shield combination
_build_single $board $shield $snippet $artifact cmake_args *west_args:
    #!/usr/bin/env bash
    set -euo pipefail
    artifact="${artifact:-${shield:+${shield// /+}-}${board//\//_}}"
    build_dir="{{ build / '$artifact' }}"

    echo "Building firmware for $artifact..."
    west build -s zmk/app -d "$build_dir" -b $board {{ west_args }} ${snippet:+-S "$snippet"} -- \
        -DZMK_CONFIG="{{ config }}" ${shield:+-DSHIELD="$shield"} {{ cmake_args }}

    if [[ -f "$build_dir/zephyr/zmk.uf2" ]]; then
        mkdir -p "{{ out }}" && cp "$build_dir/zephyr/zmk.uf2" "{{ out }}/$artifact.uf2"
    else
        mkdir -p "{{ out }}" && cp "$build_dir/zephyr/zmk.bin" "{{ out }}/$artifact.bin"
    fi

# flash firmware for single board & shield combination
# uses the board default west runner: uf2 mass-storage, or a debug probe
_flash_single $board $shield $artifact:
    #!/usr/bin/env bash
    set -euo pipefail
    artifact="${artifact:-${shield:+${shield// /+}-}${board//\//_}}"
    build_dir="{{ build / '$artifact' }}"

    echo "Flashing firmware for $artifact..."
    west flash -d "$build_dir"

# List build targets. The sed chain removes version and build variants,
# and prints the shield (if given) or otherwise the board name.
[group('build & draw')]
[doc('list build targets')]
list:
    @just build_matrix={{build_matrix}} _parse_targets all \
        | sed 's|[@/][^,]*,|,|' \
        | sed 's|\([^,]*\),\([^,]\+\),.*|\2|' \
        | sed 's|\([^,]*\),,.*|\1|' \
        | sort \
        | column

# build firmware for targets matching <expr>
[group('build & draw')]
build expr *west_args:
    #!/usr/bin/env bash
    set -euo pipefail
    targets=$(just build_matrix={{build_matrix}} _parse_targets {{ expr }})

    [[ -z $targets ]] && echo "No matching targets found. Aborting..." >&2 && exit 1
    echo "$targets" | while IFS=, read -r board shield snippet artifact cmake_args; do
        just _build_single "$board" "$shield" "$snippet" "$artifact" "$cmake_args" {{ west_args }}
    done

# flash firmware for targets matching <expr> through west runners
[group('build & draw')]
flash-v1 expr: (build expr)
    #!/usr/bin/env bash
    set -euo pipefail
    targets=$(just build_matrix={{build_matrix}} _parse_targets {{ expr }})

    [[ -z $targets ]] && echo "No matching targets found. Aborting..." >&2 && exit 1
    echo "$targets" | while IFS=, read -r board shield snippet artifact cmake_args; do
        just _flash_single "$board" "$shield" "$artifact"
    done

# parse & plot keymap
[group('build & draw')]
draw: _check_yq_version
    #!/usr/bin/env bash
    set -euo pipefail
    keymap -c "{{ draw }}/config.yaml" parse -z "{{ config }}/splitkb_aurora_sweep.keymap" --virtual-layers Combos >"{{ draw }}/base.yaml"
    yq -Yi '.combos.[].l = ["Combos"]' "{{ draw }}/base.yaml"
    keymap -c "{{ draw }}/config.yaml" draw "{{ draw }}/base.yaml" -k "ferris/sweep" >"{{ draw }}/base.svg"

# initialize the west workspace
[group('workspace')]
init:
    west init -l config
    west update --fetch-opt=--filter=blob:none
    west zephyr-export

# synchronize the west workspace (after manifest changes)
[group('workspace')]
sync:
    west update --fetch-opt=--filter=blob:none

# bump west manifest and re-sync the workspace
[group('workspace')]
bump-west: && sync
    pin-west bump

# bump nix toolchain (flake.lock)
[group('workspace')]
bump-nix:
    nix flake update --flake .

# clear build cache and artifacts
[group('cleanup')]
clean:
    rm -rf {{ build }} {{ out }}

# garbage-collect the nix store (system-wide)
[group('cleanup')]
nix-gc:
    nix-collect-garbage --delete-old

# format devicetree files, or a single directory recursively
[group('dev')]
[no-cd]
format *paths:
    #!/usr/bin/env bash
    set -euo pipefail
    paths=({{ paths }})

    if [[ ${#paths[@]} -eq 0 ]]; then
        echo "Usage: just format <file>... | <dir>" >&2
        exit 1
    fi

    for path in "${paths[@]}"; do
        if [[ -d "$path" ]]; then
            if [[ ${#paths[@]} -gt 1 ]]; then
                echo "A directory must be the only argument. Aborting..." >&2
                exit 1
            fi
            cd "$path"
            dts-format --fix
            exit 0
        fi
    done

    dts-format --fix "${paths[@]}"

# warn user if they are using golang-yq and not python-yq
[no-exit-message]
_check_yq_version:
    #!/usr/bin/env bash
    if yq --help 2>&1 | grep -qi 'eval'; then
        echo "This script requires python-yq, but PATH contains golang-yq" >&2
        echo "Please install python-yq or use the included nix shell" >&2
        exit 1
    fi
