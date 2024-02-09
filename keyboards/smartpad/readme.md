# Smart Pad

![Smart Pad V1 and V2](https://i.imgur.com/8g4JaXph.jpg)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Alexei Robyn](https://github.com/Shados)
* Hardware Supported: Smart Pad PCB
* Hardware Availability: [A 2016 Geekhack group buy](https://web.archive.org/web/20180703134842/https://geekhack.org/index.php?topic=83442.0)

Make example for this keyboard (after setting up your build environment):

    make smartpad:default

Flashing example for this keyboard:

    bootloadHID -r smartpad_default.hex

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the key at (0,5) in the matrix (the bottom left key) and plug in the keyboard
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
