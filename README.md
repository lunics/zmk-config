# Splitkb Aurora Sweep

Key mapping for the split keyboard [Aurora Sweep](https://splitkb.com/products/aurora-sweep) with the [ZMK Firmware](https://zmk.dev/docs)

Flash the firmware to the keyboard:
1. double press the reset button
2. cp firmware/splitkb_aurora_sweep_left-nice_nano_v2-zmk.uf2 /run/media/<user>/NICENANO *(for Arch Linux)*

Pairing keyboard with the laptop:
1. select bluetooth channel on splitkb: ht_har B > bt_sel n
1. open bluetooth manager cli: bluetoothctl
2. turn the controller (laptop) on: power on
2. enable the controller: pairable on
4. scan devices: scan on
5. pair the controller with the splitkb: pair <MAC>

The left hand is the master and the right hand is the slave.
The right is connected to the left which is connected to the pc.

todo:
C_AC_SCROLL_UP      Scroll Up
K_SCROLL_UP         Scroll Up
C_AC_SCROLL_DOWN    Scroll Down
K_SCROLL_DOWN       Scroll Down
- combo sdf = del ?
- combo ? + h/l = home/end
