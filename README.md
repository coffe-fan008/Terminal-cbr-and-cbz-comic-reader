<img src="first_try_menu.png" width="100%" align="center" />
Hello this is My personal project of a comic reader in cbr and cbz format for the Kitty terminal Currently I have started it but it is in a very early stage of development in which the c++ libraries are still being considered. But currently I have made a menu that does nothing yet and I also have made the base of the Archives decompressor made with libarchive. But I replaced it with the bit7z library because it is less complex for me as I am starting in c++ and I am 14 years old

### main idea
mi idea is to do a terminal based comic reader for the terminal kitty but i also want to change the libarchive to bit7z because libarchive is very complex for me 

### compile libarchive
If you want to try it out, the program is compiled with this command: g++ libarchive-first-attempt.cpp -o program -Wall -lz -lbz2  -larchive

### compile menu
if you wan to try my menu you can compile it with this command g++ ncurses.cpp -o program2 -lncurses
