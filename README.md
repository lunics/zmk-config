# Splitkb Aurora Sweep

Key mapping for the split keyboard [Aurora Sweep](https://splitkb.com/products/aurora-sweep) with the [ZMK Firmware](https://zmk.dev/docs).

Current layout of this keyboard [link](https://github.com/lunics/zmk-config/blob/main/config/layers/aurora_sweep/ergol/original), inspired from [Ergo-L](https://ergol.org/).

Only qwerty laptops are supported. For the azerty's, that can be changed in some UEFI or from the window manager.

Example for Hyrpland:
```
input {
  kb_layout = us
  ...
}
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
```sh
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

### Todo

C_AC_SCROLL_UP      Scroll Up
K_SCROLL_UP         Scroll Up
C_AC_SCROLL_DOWN    Scroll Down
K_SCROLL_DOWN       Scroll Down
- combo sdf = del ?
- combo ? + h/l = home/end
