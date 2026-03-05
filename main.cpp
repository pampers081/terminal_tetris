#include <ncurses.h>
#include "objects.h"


int main(){
	initscr();
	noecho();

	WINDOW* BORDER = newwin(ROWS + 2,(COLS*2) +2, 0, 0);
	refresh();
	box(BORDER, 0, 0);
	wrefresh(BORDER);
	int c = getch();
	endwin();
}
