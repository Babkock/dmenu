# dmenu

## This repository is archived. [It has moved to GitLab.](https://gitlab.com/tbsuckless/dmenu)

[![Build Status](https://travis-ci.org/Babkock/dmenu.svg?branch=master)](https://travis-ci.org/Babkock/dmenu)

Suckless [dynamic menu](https://tools.suckless.org/dmenu). The following patches were applied by hand.

## Patches

* Additional color scheme in config.h
* [Alpha](https://tools.suckless.org/dmenu/patches/alpha/)
* [Xresources support](https://tools.suckless.org/dmenu/patches/xresources/)
* [Mouse support](https://tools.suckless.org/dmenu/patches/mouse-support/)
* [Scroll](https://tools.suckless.org/dmenu/patches/scroll/) on long lines
* [Window border](https://tools.suckless.org/dmenu/patches/border/)

The colors specified in `config.h` are only the fallback colors, they will be replaced by Xresources.

## Xresources settings

```
dmenu.background: #101010
dmenu.foreground: #bbbbbb
dmenu.selbackground: #005577
dmenu.selforeground: #eeeeee
dmenu.midbackground: #00cc72
dmenu.midforeground: #10ee92
```

