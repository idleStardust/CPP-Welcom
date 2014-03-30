//============================================================================
// Name        : Welcom.cpp
// Author      : Arturo Mora
// Version     :
// Copyright   : Copyleft ©
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ncurses.h>

using namespace std;

int main()
{
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!");	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();
	cout << "Welcom CPP" << endl; // prints Welcom CPP
	return 0;
}
