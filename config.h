#ifndef CONFIG_H
#define CONFIG_H

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"IBMPlexMono:size=15:antialias=true"
};
static const char *prompt      = "$";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#a2a2a2", "#000000" },
	[SchemeSel] = { "#000000", "#dfdfdf" },
	[SchemeOut] = { "#a2a2a2", "#000000" },
	[SchemeMid] = { "#101010", "#979797" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/* size of the window border */
static const unsigned int border_width = 4;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

#endif

