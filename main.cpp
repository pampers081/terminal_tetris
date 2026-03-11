#include <ncurses.h>
#include "objects.h"
#include "logic.cpp"


int main(){
	initscr();
	noecho();

	WINDOW* BORDER = newwin(ROWS + 2,(COLS*2) +2, 0, 0); // declare border of gamefield

	while(true)
	{
	refresh();
		box(BORDER, 0, 0);
		wrefresh(BORDER);
		int c = getch();
	}
	endwin();
}
