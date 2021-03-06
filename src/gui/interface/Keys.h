
#if defined(USE_SDL)
#ifdef SDL_INC
#include "SDL2/SDL.h"
#else
#include "SDL.h"
#endif
#define KEY_UNKNOWN SDLK_UNKNOWN
#define KEY_UP SDLK_UP
#define KEY_NUM_UP SDLK_KP_8
#define KEY_DOWN SDLK_DOWN
#define KEY_NUM_DOWN SDLK_KP_2
#define KEY_RIGHT SDLK_RIGHT
#define KEY_NUM_RIGHT SDLK_KP_6
#define KEY_LEFT SDLK_LEFT
#define KEY_NUM_LEFT SDLK_KP_4
#define KEY_HOME SDLK_HOME
#define KEY_NUM_HOME SDLK_KP_7
#define KEY_END SDLK_END
#define KEY_NUM_END SDLK_KP_1
#define KEY_NUM_INS SDLK_KP_0
#define KEY_NUM_PGUP SDLK_KP_9
#define KEY_NUM_PGDOWN SDLK_KP_3
#define KEY_NUM_PERIOD SDLK_KP_PERIOD
#define KEY_BACKSPACE SDLK_BACKSPACE
#define KEY_DELETE SDLK_DELETE
#define KEY_TAB SDLK_TAB
#define KEY_RETURN SDLK_RETURN
#define KEY_ENTER SDLK_KP_ENTER
#define KEY_ESCAPE SDLK_ESCAPE
#define KEY_INSERT SDLK_INSERT

#define KEY_NUM_5 SDLK_KP5

#define KEY_LCTRL SDLK_LCTRL
#define KEY_LALT SDLK_LALT
#define KEY_LSHIFT SDLK_LSHIFT
#define KEY_RCTRL SDLK_RCTRL
#define KEY_RALT SDLK_RALT
#define KEY_RSHIFT SDLK_RSHIFT

#define KEY_MOD_NONE			KMOD_NONE
#define KEY_MOD_LSHIFT			KMOD_LSHIFT
#define KEY_MOD_RSHIFT			KMOD_RSHIFT
#define KEY_MOD_LCONTROL		KMOD_LCTRL
#define KEY_MOD_RCONTROL		KMOD_RCTRL
#define KEY_MOD_LALT			KMOD_LALT
#define KEY_MOD_RALT			KMOD_RALT
#define KEY_MOD_LMETA			KMOD_LMETA
#define KEY_MOD_RMETA			KMOD_RMETA
#define KEY_MOD_NUM				KMOD_NUM
#define KEY_MOD_CAPS			KMOD_CAPS
#define KEY_MOD_MODE			KMOD_MODE
#define KEY_MOD_RESERVED		KMOD_RESERVED

#ifdef MACOSX
#define KEY_MOD_CONTROL			(KEY_MOD_RCONTROL | KEY_MOD_LCONTROL | KEY_MOD_LMETA | KEY_MOD_RMETA)
#else
#define KEY_MOD_CONTROL			(KEY_MOD_RCONTROL | KEY_MOD_LCONTROL)
#endif
#define KEY_MOD_ALT				(KEY_MOD_RALT | KEY_MOD_LALT)
#define KEY_MOD_SHIFT			(KEY_MOD_RSHIFT | KEY_MOD_LSHIFT)

#define KEY_a SDLK_a
#define KEY_d SDLK_d
#define KEY_s SDLK_s
#define KEY_w SDLK_w

#define KEY_F1 SDLK_F1
#define KEY_F2 SDLK_F2
#define KEY_F3 SDLK_F3
#define KEY_F5 SDLK_F5

#define BUTTON_LEFT SDL_BUTTON_LEFT
#define BUTTON_MIDDLE SDL_BUTTON_MIDDLE
#define BUTTON_RIGHT SDL_BUTTON_RIGHT

#else

#define KEY_UNKNOWN 0
#define KEY_UP 1
#define KEY_NUM_UP 47
#define KEY_DOWN 2
#define KEY_NUM_DOWN 48
#define KEY_RIGHT 3
#define KEY_NUM_RIGHT 49
#define KEY_LEFT 4
#define KEY_NUM_LEFT 50
#define KEY_HOME 5
#define KEY_NUM_HOME 51
#define KEY_END 6
#define KEY_NUM_END 47
#define KEY_BACKSPACE 7
#define	KEY_DELETE 8
#define KEY_TAB 9
#define KEY_RETURN 10
#define KEY_ENTER 11
#define KEY_ESCAPE 12
#define KEY_INSERT 46

#define KEY_NUM_INS 52
#define KEY_NUM_PGUP 53
#define KEY_NUM_PGDOWN 54
#define KEY_NUM_PERIOD 55
#define KEY_NUM_5 56

#define KEY_LCTRL 13
#define KEY_LALT 14
#define KEY_LSHIFT 15
#define KEY_RCTRL 43
#define KEY_RALT 44
#define KEY_RSHIFT 45

#define KEY_MOD_NONE 30
#define KEY_MOD_LSHIFT 31
#define KEY_MOD_RSHIFT 32
#define KEY_MOD_LCONTROL 33
#define KEY_MOD_RCONTROL 34
#define KEY_MOD_LALT 35
#define KEY_MOD_RALT 36
#define KEY_MOD_LMETA 37
#define KEY_MOD_RMETA 38
#define KEY_MOD_NUM	39
#define KEY_MOD_CAPS 40
#define KEY_MOD_MODE 41
#define KEY_MOD_RESERVED 42 

#define KEY_MOD_CONTROL 16
#define KEY_MOD_ALT 17
#define KEY_MOD_SHIFT 18

#define KEY_a 22
#define KEY_d 23
#define KEY_s 24
#define KEY_w 25

#define KEY_F1 26
#define KEY_F2 27
#define KEY_F3 28
#define KEY_F5 29

#define BUTTON_LEFT 19
#define BUTTON_MIDDLE 20
#define BUTTON_RIGHT 21

#endif
