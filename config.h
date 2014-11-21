#define MOD		SUPER		/* modifier (CTRL, ALT, SUPER, etc.) */
#define FOCUSCOL	0xFFFFFF	/* focused   inner border color */
#define UNFOCUSCOL	0x555555	/* unfocused inner border color */
#define OUTER_COLOR	0x999999	/*  outer border color */
#define RESIZE_COLOR	0xC1C1C1	/* resize border color */
#define BORDERWIDTH	4		/*  full  border width */
#define INNER		3		/*  inner border width */
#define OUTER		3		/*  outer border width */


static struct swm_keys_t keys[] =
{
	/*   modifier          key           function    NULL      x    y       */
	{    MOD,              XK_Left,      move,       NULL,    -50,  0       },
	{    MOD,              XK_Down,      move,       NULL,      0,  50      },
	{    MOD,              XK_Up,        move,       NULL,      0, -50      },
	{    MOD,              XK_Right,     move,       NULL,     50,  0       },

	{    MOD|CTRL,         XK_Left,      move,       NULL,     -1,  0       },
	{    MOD|CTRL,         XK_Down,      move,       NULL,      0,  1       },
	{    MOD|CTRL,         XK_Up,        move,       NULL,      0, -1       },
	{    MOD|CTRL,         XK_Right,     move,       NULL,      1,  0       },

	{    MOD|SHIFT,        XK_Left,      resize,     NULL,    -50,  0       },
	{    MOD|SHIFT,        XK_Down,      resize,     NULL,      0,  50      },
	{    MOD|SHIFT,        XK_Up,        resize,     NULL,      0, -50      },
	{    MOD|SHIFT,        XK_Right,     resize,     NULL,     50,  0       },

	{    MOD|CTRL|SHIFT,   XK_Left,      resize,     NULL,     -1,  0       },
	{    MOD|CTRL|SHIFT,   XK_Down,      resize,     NULL,      0,  1       },
	{    MOD|CTRL|SHIFT,   XK_Up,        resize,     NULL,      0, -1       },
	{    MOD|CTRL|SHIFT,   XK_Right,     resize,     NULL,      1,  0       },

	/*   modifier          key        NULL        function               */
	{    MOD,              XK_q,      NULL,       killwin                },
	{    ALT,              XK_Tab,    NULL,       nextwin                },
	{    MOD|CTRL,         XK_q,      NULL,       cleanup                },
	
};
