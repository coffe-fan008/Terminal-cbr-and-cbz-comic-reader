<img src="first_try_menu.png" width="100%" align="center" />
Hello this is My personal project of a comic reader in cbr and cbz format for the Kitty terminal writed on C++ Currently I have started it but it is in a very early stage of development in which the c++ libraries are still being considered. But currently I have made a menu that does nothing yet and I also have made the base of the Archives decompressor made with libarchive. But I replaced it with the bit7z library because it is less complex for me as I am starting in c++ and I am 14 years old

### How it will work
The reader will work using bit7z as a base to decompress the files to the ram and then print an image using the image protocol of the kitty terminal I'm also currently using the ncurses library to make an interactive menu and the filesystem library to read the files of a directory and string along with fstream to be able to read and write a file where the comic book directories will go

### other
This is a really big project for me since at the beginning I thought it was going to be easy for someone of 14 who likes comics and computers But I realized that it was not and the truth is that I would really like to finish it before entering high school again because it is a really interesting project in addition to the fact that most comic readers are paid and with ads so once I finished it for terminal I would like to port it with a graphical interface to Windows and Android and also if you read this thank you very much for seeing my project

### compile libarchive
If you want to try it out, the program is compiled with this command: g++ libarchive-first-attempt.cpp -o program -Wall -lz -lbz2  -larchive

### compile menu
if you wan to try my menu you can compile it with this command g++ ncurses.cpp -o program2 -lncurses
