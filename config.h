/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;         /* -b  option; if 0, dmenu appears at bottom          */
static int fuzzy = 1;          /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int centered = 0;       /* -c option; centers dmenu on screen                 */
static int min_width = 500;    /* minimum width when centered                        */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FiraCode Nerd Font:style=Regular:size=14:autohint=True:antialias=True"
};
static const char *prompt      = NULL;                /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm]          = { "#e3c78a", "#080808" },
	[SchemeSel]           = { "#ffffff", "#289600" },
	[SchemeSelHighlight]  = { "#ff00ff", "#4c125e" },
	[SchemeNormHighlight] = { "#de935f", "#111111" },
	[SchemeOut]           = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
