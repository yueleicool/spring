#ifndef SDL1_KEYSYM_H
#define SDL1_KEYSYM_H

#include <unordered_map>
#include <SDL2/SDL_keycode.h>
#include "System/Util.h" // DO_ONCE_FNC

//TODO create in a .cpp and make const?
static std::unordered_map<int, int> SDL2_to_SDL1_keysyms;
static std::unordered_map<int, int> SDL1_to_SDL2_keysyms;

#define MAP(k,v) SDL2_to_SDL1_keysyms[k] = v; SDL1_to_SDL2_keysyms[v] = k;

DO_ONCE_FNC(
	MAP(SDLK_UNKNOWN, 0)

	MAP(SDLK_RETURN, 13)
	MAP(SDLK_ESCAPE, 27)
	MAP(SDLK_BACKSPACE, 8)
	MAP(SDLK_TAB, 9)
	MAP(SDLK_SPACE, 32)
	MAP(SDLK_EXCLAIM, 33)
	MAP(SDLK_QUOTEDBL, 34)
	MAP(SDLK_HASH, 35)
	MAP(SDLK_PERCENT, 0)
	MAP(SDLK_DOLLAR, 36)
	MAP(SDLK_AMPERSAND, 38)
	MAP(SDLK_QUOTE, 39)
	MAP(SDLK_LEFTPAREN, 40)
	MAP(SDLK_RIGHTPAREN, 41)
	MAP(SDLK_ASTERISK, 42)
	MAP(SDLK_PLUS, 43)
	MAP(SDLK_COMMA, 44)
	MAP(SDLK_MINUS, 45)
	MAP(SDLK_PERIOD, 46)
	MAP(SDLK_SLASH, 47)
	MAP(SDLK_0, 48)
	MAP(SDLK_1, 49)
	MAP(SDLK_2, 50)
	MAP(SDLK_3, 51)
	MAP(SDLK_4, 52)
	MAP(SDLK_5, 53)
	MAP(SDLK_6, 54)
	MAP(SDLK_7, 55)
	MAP(SDLK_8, 56)
	MAP(SDLK_9, 57)
	MAP(SDLK_COLON, 58)
	MAP(SDLK_SEMICOLON, 59)
	MAP(SDLK_LESS, 60)
	MAP(SDLK_EQUALS, 61)
	MAP(SDLK_GREATER, 62)
	MAP(SDLK_QUESTION, 63)
	MAP(SDLK_AT, 64)
	MAP(SDLK_LEFTBRACKET, 91)
	MAP(SDLK_BACKSLASH, 92)
	MAP(SDLK_RIGHTBRACKET, 93)
	MAP(SDLK_CARET, 94)
	MAP(SDLK_UNDERSCORE, 95)
	MAP(SDLK_BACKQUOTE, 96)
	MAP(SDLK_a, 97)
	MAP(SDLK_b, 98)
	MAP(SDLK_c, 99)
	MAP(SDLK_d, 100)
	MAP(SDLK_e, 101)
	MAP(SDLK_f, 102)
	MAP(SDLK_g, 103)
	MAP(SDLK_h, 104)
	MAP(SDLK_i, 105)
	MAP(SDLK_j, 106)
	MAP(SDLK_k, 107)
	MAP(SDLK_l, 108)
	MAP(SDLK_m, 109)
	MAP(SDLK_n, 110)
	MAP(SDLK_o, 111)
	MAP(SDLK_p, 112)
	MAP(SDLK_q, 113)
	MAP(SDLK_r, 114)
	MAP(SDLK_s, 115)
	MAP(SDLK_t, 116)
	MAP(SDLK_u, 117)
	MAP(SDLK_v, 118)
	MAP(SDLK_w, 119)
	MAP(SDLK_x, 120)
	MAP(SDLK_y, 121)
	MAP(SDLK_z, 122)

	MAP(SDLK_CAPSLOCK, 301)

	MAP(SDLK_F1, 282)
	MAP(SDLK_F2, 283)
	MAP(SDLK_F3, 284)
	MAP(SDLK_F4, 285)
	MAP(SDLK_F5, 286)
	MAP(SDLK_F6, 287)
	MAP(SDLK_F7, 288)
	MAP(SDLK_F8, 289)
	MAP(SDLK_F9, 290)
	MAP(SDLK_F10, 291)
	MAP(SDLK_F11, 292)
	MAP(SDLK_F12, 293)

	MAP(SDLK_PRINTSCREEN, 316)
	MAP(SDLK_SCROLLLOCK, 302)
	MAP(SDLK_PAUSE, 318)
	MAP(SDLK_INSERT, 277)
	MAP(SDLK_HOME, 278)
	MAP(SDLK_PAGEUP, 280)
	MAP(SDLK_DELETE, 127)
	MAP(SDLK_END, 279)
	MAP(SDLK_PAGEDOWN, 281)
	MAP(SDLK_RIGHT, 275)
	MAP(SDLK_LEFT, 276)
	MAP(SDLK_DOWN, 274)
	MAP(SDLK_UP, 273)

	MAP(SDLK_NUMLOCKCLEAR, 300)
	MAP(SDLK_KP_DIVIDE, 267)
	MAP(SDLK_KP_MULTIPLY, 268)
	MAP(SDLK_KP_MINUS, 269)
	MAP(SDLK_KP_PLUS, 270)
	MAP(SDLK_KP_ENTER, 271)
	MAP(SDLK_KP_1, 257)
	MAP(SDLK_KP_2, 258)
	MAP(SDLK_KP_3, 259)
	MAP(SDLK_KP_4, 260)
	MAP(SDLK_KP_5, 261)
	MAP(SDLK_KP_6, 262)
	MAP(SDLK_KP_7, 263)
	MAP(SDLK_KP_8, 264)
	MAP(SDLK_KP_9, 265)
	MAP(SDLK_KP_0, 256)
	MAP(SDLK_KP_PERIOD, 266)

//	MAP(SDLK_APPLICATION, 0)
	MAP(SDLK_POWER, 320)
	MAP(SDLK_KP_EQUALS, 272)
	MAP(SDLK_F13, 294)
	MAP(SDLK_F14, 295)
	MAP(SDLK_F15, 296)
//	MAP(SDLK_F16, 0)
//	MAP(SDLK_F17, 0)
//	MAP(SDLK_F18, 0)
//	MAP(SDLK_F19, 0)
//	MAP(SDLK_F20, 0)
//	MAP(SDLK_F21, 0)
//	MAP(SDLK_F22, 0)
//	MAP(SDLK_F23, 0)
//	MAP(SDLK_F24, 0)
//	MAP(SDLK_EXECUTE, 0)
	MAP(SDLK_HELP, 315)
	MAP(SDLK_MENU, 319)
//	MAP(SDLK_SELECT, 0)
//	MAP(SDLK_STOP, 0)
//	MAP(SDLK_AGAIN, 0)
	MAP(SDLK_UNDO, 322)
//	MAP(SDLK_CUT, 0)
//	MAP(SDLK_COPY, 0)
//	MAP(SDLK_PASTE, 0)
//	MAP(SDLK_FIND, 0)
//	MAP(SDLK_MUTE, 0)
//	MAP(SDLK_VOLUMEUP, 0)
//	MAP(SDLK_VOLUMEDOWN, 0)
	MAP(SDLK_KP_COMMA, 44) //using SDLK_COMMA
//	MAP(SDLK_KP_EQUALSAS400, 0)

//	MAP(SDLK_ALTERASE, 0)
	MAP(SDLK_SYSREQ, 317)
//	MAP(SDLK_CANCEL, 0)
	MAP(SDLK_CLEAR, 12)
//	MAP(SDLK_PRIOR, 0)
//	MAP(SDLK_RETURN2, 0)
//	MAP(SDLK_SEPARATOR, 0)
//	MAP(SDLK_OUT, 0)
//	MAP(SDLK_OPER, 0)
//	MAP(SDLK_CLEARAGAIN, 0)
//	MAP(SDLK_CRSEL, 0)
//	MAP(SDLK_EXSEL, 0)

//	MAP(SDLK_KP_00, 0)
//	MAP(SDLK_KP_000, 0)
//	MAP(SDLK_THOUSANDSSEPARATOR, 0)
//	MAP(SDLK_DECIMALSEPARATOR, 0)
//	MAP(SDLK_CURRENCYUNIT, 0)
//	MAP(SDLK_CURRENCYSUBUNIT, 0)
//	MAP(SDLK_KP_LEFTPAREN, 0)
//	MAP(SDLK_KP_RIGHTPAREN, 0)
//	MAP(SDLK_KP_LEFTBRACE, 0)
//	MAP(SDLK_KP_RIGHTBRACE, 0)
//	MAP(SDLK_KP_TAB, 0)
//	MAP(SDLK_KP_BACKSPACE, 0)
//	MAP(SDLK_KP_A, 0)
//	MAP(SDLK_KP_B, 0)
//	MAP(SDLK_KP_C, 0)
//	MAP(SDLK_KP_D, 0)
//	MAP(SDLK_KP_E, 0)
//	MAP(SDLK_KP_F, 0)
//	MAP(SDLK_KP_XOR, 0)
//	MAP(SDLK_KP_POWER, 0)
//	MAP(SDLK_KP_PERCENT, 0)
//	MAP(SDLK_KP_LESS, 0)
//	MAP(SDLK_KP_GREATER, 0)
//	MAP(SDLK_KP_AMPERSAND, 0)
//	MAP(SDLK_KP_DBLAMPERSAND, 0)
//	MAP(SDLK_KP_VERTICALBAR, 0)
//	MAP(SDLK_KP_DBLVERTICALBAR, 0)
//	MAP(SDLK_KP_COLON, 0)
//	MAP(SDLK_KP_HASH, 0)
//	MAP(SDLK_KP_SPACE, 0)
//	MAP(SDLK_KP_AT, 0)
//	MAP(SDLK_KP_EXCLAM, 0)
//	MAP(SDLK_KP_MEMSTORE, 0)
//	MAP(SDLK_KP_MEMRECALL, 0)
//	MAP(SDLK_KP_MEMCLEAR, 0)
//	MAP(SDLK_KP_MEMADD, 0)
//	MAP(SDLK_KP_MEMSUBTRACT, 0)
//	MAP(SDLK_KP_MEMMULTIPLY, 0)
//	MAP(SDLK_KP_MEMDIVIDE, 0)
//	MAP(SDLK_KP_PLUSMINUS, 0)
//	MAP(SDLK_KP_CLEAR, 0)
//	MAP(SDLK_KP_CLEARENTRY, 0)
//	MAP(SDLK_KP_BINARY, 0)
//	MAP(SDLK_KP_OCTAL, 0)
//	MAP(SDLK_KP_DECIMAL, 0)
//	MAP(SDLK_KP_HEXADECIMAL, 0)

	MAP(SDLK_LCTRL, 306)
	MAP(SDLK_LSHIFT, 304)
	MAP(SDLK_LALT, 308)
	MAP(SDLK_LGUI, 310)
	MAP(SDLK_RCTRL, 305)
	MAP(SDLK_RSHIFT, 303)
	MAP(SDLK_RALT, 307)
	MAP(SDLK_RGUI, 309)

	MAP(SDLK_MODE, 313)

//	MAP(SDLK_AUDIONEXT, 0)
//	MAP(SDLK_AUDIOPREV, 0)
//	MAP(SDLK_AUDIOSTOP, 0)
//	MAP(SDLK_AUDIOPLAY, 0)
//	MAP(SDLK_AUDIOMUTE, 0)
//	MAP(SDLK_MEDIASELECT, 0)
//	MAP(SDLK_WWW, 0)
//	MAP(SDLK_MAIL, 0)
//	MAP(SDLK_CALCULATOR, 0)
//	MAP(SDLK_COMPUTER, 0)
//	MAP(SDLK_AC_SEARCH, 0)
//	MAP(SDLK_AC_HOME, 0)
//	MAP(SDLK_AC_BACK, 0)
//	MAP(SDLK_AC_FORWARD, 0)
//	MAP(SDLK_AC_STOP, 0)
//	MAP(SDLK_AC_REFRESH, 0)
//	MAP(SDLK_AC_BOOKMARKS, 0)

//	MAP(SDLK_BRIGHTNESSDOWN, 0)
//	MAP(SDLK_BRIGHTNESSUP, 0)
//	MAP(SDLK_DISPLAYSWITCH, 0)
//	MAP(SDLK_KBDILLUMTOGGLE, 0)
//	MAP(SDLK_KBDILLUMDOWN, 0)
//	MAP(SDLK_KBDILLUMUP, 0)
//	MAP(SDLK_EJECT, 0)
//	MAP(SDLK_SLEEP, 0)
)
#undef MAP

#endif // SDL1_KEYSYM_H
