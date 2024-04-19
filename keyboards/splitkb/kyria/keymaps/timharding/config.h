#pragma once

// Milliseconds before a press is considered a hold
#define TAPPING_TERM 140

// Don't switch key repeat is a hold is required after a press
#define QUICK_TAP_TERM 0

// If a press is initiated, another key is tapped,
// and then the press is released before the tapping term expires,
// the press is still registered as a hold
#define PERMISSIVE_HOLD

// Registers a hold if another press occurs during a press.
// May result in false positives on rolls,
// but with the mods on the lower row,
// rolls starting with [z x c d h , . '] are less likely.
// Try this out and see how it goes.
// #define HOLD_ON_OTHER_KEY_PRESS

// Allows to use either side as the master. Look at the documentation for info:
// https://docs.qmk.fm/#/config_options?id=setting-handedness
#define EE_HANDS
