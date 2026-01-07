# HHBB

![HHBB](https://anz507.sirv.com/Images/IMG_2055.jpg)

![HHBB](https://anz507.sirv.com/Images/IMG_3520.jpg)

![HHBB](https://anz507.sirv.com/Images/IMG_3525.jpg)

![HHBB](https://anz507.sirv.com/Images/Screenshot%202026-01-07%20at%2016.55.21.png)

*A short description of the keyboard/project*

A 34 keys 3d printed keyboard with 7.5 degree typing angle that takes inspiration from HappyHacking Keyboard and Apricot. I use spring to mount the plate and it features solenoid.

Case and plate can be downloaded here: [Thingiverse](https://www.thingiverse.com/thing:7199235)

Included prebuilt firmware: `hhbb_anz507.uf2` or you can compile using comand below.

* Keyboard Maintainer: [Ahmad Anshori](https://github.com/anz507)
* Hardware Supported:
    - Handwired
    - RP2040 microcontroller
    - Small Solenoid for Haptic Feedback

Make example for this keyboard (after setting up your build environment) using qmk:

    qmk compile -kb hhbb -km anz507

Flashing example for this keyboard:

     Hold BOOT button on RP2040 and plug in usb c cable
     Device will be detected like a USB flash drive on computer
     Copy and paste hhbb_anz507.uf2 to RP2040

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

