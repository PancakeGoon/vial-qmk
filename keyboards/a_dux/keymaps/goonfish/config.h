/*
Copyright 2022 PancakeGoon

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef AUDIO_ENABLE
#    define AUDIO_PIN B7
#    define NO_MUSIC_MODE
#    define AUDIO_INIT_DELAY 55
#endif

#define LAYER_STATE_8BIT
#define VIAL_TAP_DANCE_ENTRIES 6
#define VIAL_COMBO_ENTRIES 5
#define DYNAMIC_KEYMAP_MACRO_COUNT 4

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 4000

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
