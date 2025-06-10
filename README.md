# Splitkb Aurora Sweep

Key mapping for the split keyboard [Aurora Sweep](https://splitkb.com/products/aurora-sweep) with the [ZMK Firmware](https://zmk.dev/docs).

Current layout of this keyboard [here](https://github.com/lunics/zmk-config/blob/main/config/layers/aurora_sweep/ergol/default.h), inspired from [Ergo-L](https://ergol.org/).

## Mapping

```txt
╭─────────┬─────────┬─────────┬─────────┬─────────╮ ╭─────────┬─────────┬─────────┬─────────┬─────────╮
|    q    |    c    |    o    |    p    |    w    | |    j    |    m    |    d    |    '    |    f    |
├─────────┼─────────┼─────────┼─────────┼─────────┤ ├─────────┼─────────┼─────────┼─────────┼─────────┤
|    a    |    s    |    e    |    n    |    ,    | |    l    |    r    |    t    |    i    |    u    |
├─────────┼─────────┼─────────┼─────────┼─────────┤ ├─────────┼─────────┼─────────┼─────────┼─────────┤
|   z_    |    x    |    -    |    v    |    b    | |    .    |    h    |    g    |    y    |    k    |
╰─────────┴─────────┴─────────┼─────────┼─────────┤ ├─────────┼─────────┼─────────┴─────────┴─────────╯
                              |   esc   |  space  | |  enter  |   tab   |
                              ╰─────────┴─────────╯ ╰─────────┴─────────╯
```

## Functions

```txt
ht_symr A               Hold Tap Symbol Right = keep pressed A to enable symbols on the right kb or tap the letter A
ht_winl S               Hold Tap Windows Left = keep pressed S to simulate the left Windows key or tap the letter S
ht_ctll E 
ht_altl N   
ht_ctlr R    
t5                      tap once the letter T = t, tape twice the letter T = 5;     (Tape Dance = &td_t5 = TAPDANCE(t_, num_5))
i6     
ht_fun X    
ht_har B       
ht_altr H    
g2        
y3
ht_shft ESC             keep pressed = SHIFT, simple tap = ESCAPE
ht_navl SPACE           keep pressed enable navigation layer on the left hand
ht_numr ENTER
ht_sper TAB             keep pressed enable special layer on the right hand
```

## Flash the firmware to the keyboard:

1. Plug in the left kb to the laptop.
2. Double press the reset button.
3. Download firmware from the latest workflow of the Github actions: [example](https://github.com/lunics/zmk-config/actions/runs/14944270056).
4. Unzip the firmware.zip.
5. cp firmware/splitkb_aurora_sweep_left-nice_nano_v2-zmk.uf2 /run/media/$USER/NICENANO
*Repeat the operation for the right kb.*

## Pairing keyboard with the laptop:

1. Turn on the left kb: pwr button UP, turn on right kb: pwr button DOWN (don't trust the pwr mark on the pcb).
2. Select bluetooth channel on splitkb: [ht_har B](https://github.com/lunics/zmk-config/blob/main/config/layers/aurora_sweep/ergol/default) + [bt_sel n](https://github.com/lunics/zmk-config/blob/main/config/layers/aurora_sweep/hardware)
3. Setup bluetooth controller:
```txt
bluetoothctl            # open the cli bluetooth manager
  power on              # turn the controller (laptop) on
  pairable on           # enable the controller for pairing
  scan on               # scan devices
  pair MAC_ADDR         # pair the controller with the splitkb
  connect MAC_ADDR      # connect the controller with the splitkb
  scan off
  pairable off
```

The left kb is the master and the right one is the slave.
The right is connected to the left, which is connected to the laptop.

### Issue with azerty system

Only qwerty laptops are supported. For the azerty's, that can be changed in some UEFI or from the window manager.

Example for Hyrpland:
```
input {
  kb_layout = us
  ...
}
```

### Todo

C_AC_SCROLL_UP      Scroll Up
K_SCROLL_UP         Scroll Up
C_AC_SCROLL_DOWN    Scroll Down
K_SCROLL_DOWN       Scroll Down
- combo sdf = del ?
- combo ? + h/l = home/end
