/*
 * Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Key matrix configuration. */
#define MATRIX_ROW_PINS \
    { B6, B2, B3, B1, F7, F6 } // { F1, B7, C6, D4, B5 }
#define MATRIX_COL_PINS \
    { B5, B4, E6, D7, C6, D4 } // { D5, C7, F0, D7, E6, B4 }

#define MATRIX_ROW_PINS_RIGHT \
    { B6, F0, F1, C7, D5, B7 } // { D5, F0, C6, D4, B5 }
#define MATRIX_COL_PINS_RIGHT \
    { D4, C6, D7, E6, B4, B5 } //  { F1, C7, B7, D7, E6, B4 }

#define UNUSED_PINS_R { B6, F6 }

/* Handedness. */
#define MASTER_LEFT // MASTER_RIGHT

/* serial.c configuration (for split keyboard). */
#define SOFT_SERIAL_PIN D0 // D2

/* RGB settings. */
#define RGB_DI_PIN D3

/* PMW3360 settings. */
#define PMW3360_CS_PIN F7 // B0
