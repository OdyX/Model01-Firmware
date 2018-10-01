/* In this layer, we move mouse keys to a homed, inverted-T position under the
 * left hand, and arrange warp keys in a square around them. The left mouse
 * button is under the left pinky, so it can be held down easily for drag and
 * drop; the other mouse buttons are located by analogy. Insert is therefore
 * displaced, and moves to Fn-B, close to Delete.
 *
 * Similarly, on the right hand we move the arrow keys to a homed inverted-T.
 * Since the parameterised primary layer contains a full set of keys, we
 * repurpose the magic symbols for CapsLock, ScrollLock, Pause/Break and SysRq
 */

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

  [FUNCTION] = KEYMAP_STACKED
  (Key_Backtick, Key_F1,           Key_F2,           Key_F3,         Key_F4,            Key_F5,           Key_LEDEffectNext,
   Key_Tab,      SCROLL_UP,        Key_mouseWarpNW,  Key_mouseUp,    Key_mouseWarpNE,   Key_mouseWarpEnd, Key_PageUp,
   Key_Home,     Key_mouseBtnL,    Key_mouseL,       Key_mouseDn,    Key_mouseR,        Key_mouseBtnR,
   Key_End,      SCROLL_DOWN,      Key_mouseWarpSW,  Key_mouseBtnM,  Key_mouseWarpSE,   Key_Insert,       Key_PageDown,
   ___, Key_Delete, ___, ___,
   ___,

   Consumer_ScanPreviousTrack, Key_F6,                 Key_F7,                   Key_F8,                   Key_F9,          Key_F10,   Key_F11,
   Consumer_PlaySlashPause,    Consumer_ScanNextTrack, Key_CapsLock,             Key_UpArrow,              Key_ScrollLock,  Key_Pause, Key_F12,
                               Key_PrintScreen,        Key_LeftArrow,            Key_DownArrow,            Key_RightArrow,  ___,       ___,
   Key_PcApplication,          Consumer_Mute,          Consumer_VolumeDecrement, Consumer_VolumeIncrement, ___,             ___,       Key_Sysreq,
   ___, ___, Key_Enter, ___,
   ___)

// *INDENT-ON*
