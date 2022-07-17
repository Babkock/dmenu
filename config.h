#ifndef CONFIG_H
#define CONFIG_H

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

unsigned int border_width = 4;
static const unsigned int alpha = 0xc8;

/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] = {
	"SpaceMono Nerd Font:size=16:antialias=true"
};
static const char *prompt      = "$";      /* -p  option; prompt to the left of input field */

/* these colors will be changed with colors from Xresources */
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#101010" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeMid] = { "#10ee92", "#00cc72" },
	[SchemeOut] = { "#000000", "#00ffff" }
};

static unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, 0x65 },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeMid] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha }
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

#endif

