# This is the `vial-develop` branch!

**NOTE: This is a merge of qmk_firmware's develop branch and vial's main branch. My intention with this fork is to provide VIAL support for the RP2040 (and other boards using MCUs like the L432, e.g. Q1) using the official QMK implementation.**

Notable:
* See `keyboards/vial_example/vial_rp2040` for how to add rp2040 specific rules to your `rules.mk`.
* For boards using `VIAL_ENCODERS_ENABLE`, this fork changed how you assign the default keycodes. It now follows QMK's [Encoder Map](https://github.com/qmk/qmk_firmware/blob/master/docs/feature_encoders.md#encoder-map-idencoder-map) guidelines, instead of the definition of a `VIAL_ENCODERS_DEFAULT` variable in the `config.h`. Make sure to set `ENCODER_MAP_ENABLED = yes` in your `config.h` file.
* This fork also allows for proper STM32L432/L433 EEPROM emulation support. This means the Keychron Q-series boards get proper vial support. See `keyboards/keychron`.
* TECHNICAL CHANGE: This fork doesn't carry over [#16394](https://github.com/qmk/qmk_firmware/pull/16394), as it broke VIAL's implementation of Dynamic Tap Dance. I was not smart enough to update VIAL's implementation of tap dance to suit QMK's changes so I just reverted it to use what existed before. This has little/no effect on users.
* Why does this exist? XYZ (the main dev of vial-qmk) said he wouldn't rebase vial-qmk with the new rp2040 changes until it gets merged into qmk master (which will be in q3 2022), so I just did it myself. Just keep in mind that this fork is unofficial and thus changes I have made may not be in line with XYZ's desires.

See the [Breaking Changes](https://docs.qmk.fm/#/breaking_changes) document for more information.

# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the [Clueboard product line](https://clueboard.co).

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
