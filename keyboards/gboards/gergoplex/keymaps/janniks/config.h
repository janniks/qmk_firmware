// NOTES:
// - tap VS hold https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold
// - HOLD_ON_OTHER_KEY_PRESS makes it hard to have hold modifiers on letter keys
// - PERMISSIVE_HOLD is the opposite of what i want
// - TAPPING_TERM 175 works decently well
// - IGNORE_MOD_TAP_INTERRUPT https://precondition.github.io/home-row-mods#ignore-mod-tap-interrupt

#define TAPPING_TERM 175
#define IGNORE_MOD_TAP_INTERRUPT
