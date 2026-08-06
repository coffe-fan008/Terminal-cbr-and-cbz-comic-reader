#include <string>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <ncurses.h>
#include <menu.h>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    initscr();
    noecho();
    const int enter_key = 10;
    curs_set(0);

    int height, width;
    getmaxyx(stdscr, height, width);

    // Create windows size
    WINDOW *win = newwin(height, width, 0, 0);
    box(win, 0, 0);
    vector<string> choices = {
	   "Files",
	   "Options",
	   "Quit",
    };
    int num_choices = choices.size();
    int choice;
    int highlight = 0;
    char ch;
    refresh();
    wrefresh(win);
    keypad(win, true);
    while (choice = wgetch(win)) {
	wrefresh(win);
        for (int i = 0; i < choices.size(); i++) {
	   if (i == highlight)
	       wattron(win, A_REVERSE);
	   mvwprintw(win, i + 0, 2, choices[0].c_str());
	   mvwprintw(win, i + 0, 8, choices[1].c_str());
	   mvwprintw(win, i + 0, 16, choices[2].c_str());
	   wattroff(win, A_REVERSE);
	}

	switch(choice) {
	   case KEY_LEFT:
                if (highlight > 0)
		   highlight--;
		break;
	   case KEY_RIGHT:
		if (highlight < choices.size() - 1)
		   highlight++;
		break;
	   default:
		break;
	}
/*	if (choice == enter_key)
		break;
*/
    }
    endwin();
    return 0;
}
