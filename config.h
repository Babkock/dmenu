/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#ifndef CONFIG_H
#define CONFIG_H

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

unsigned int border_width = 4;
static const unsigned int alpha = 0x60U;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"IBMPlex:size=15:antialias=true:file=/usr/share/fonts/truetype/ibm-plex/Blex Mono Nerd Font Complete.ttf"
};
static const char *prompt      = "$";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

#endif

