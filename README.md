<img src="fist_try_menu.png" width="100%" align="center" />
Hi, this is a terminal-based comic book reader that I'm developing, but for now, it only functions as a decompressor and the menu dont't work 

### compile libarchive
If you want to try it out, the program is compiled with this command: g++ libarchive-first-attempt.cpp -o program -Wall -lz -lbz2  -larchive

### compile menu
if you wan to try my menu you can compile it with this command g++ ncurses.cpp -o program2 -lncurses
