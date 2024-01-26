# Cursed File Browser 

## Overview

A basic file browser made in ncurses


## Installation

Ncurses is required to run and build this program. If you are on a *nix sytem that is not locked docked by APS you can install ncurses with a package manager

Mac ([Homebrew](https://brew.sh/))
```bash
brew install ncurses
```
Arch Linux (pacman)
```bash
sudo pacman -S ncurses
```
Arch Linux (pacman)
```bash
sudo pacman -S ncurses
```
Debian (apt)
```bash
sudo apt-get install libncurses5-dev libncursesw5-dev
```
## Compilation
When compiling use the -lncurses flag like so:
```bash
g++ cursed.cpp -lncurses
```