#include <stdio.h>
#include <ncurses.h>

int main()
{
	int c;
	char inputTemp[10];
	float convTemp;

	// Initialize window
	initscr();
//	raw();
//	clear();
//	cbreak();
	keypad(stdscr, TRUE);
	noecho();

	printw("Press C to convert from Farhenheight to Celsius\nPress F to convert from Celsius Farhenheight\n");
	c = getch();
	refresh();
	

	while(1)
	{
		if ( c == 'F' || c == 'f')
		{
			printw("\nFahrenheight was selected!\nPlease enter the tempature in Celsius :");
			echo();
			wgetstr(stdscr, inputTemp);
			convTemp = (atof(inputTemp) * 9/5) + 32;
			printw("The temperature in Fahrenheit: %.2f\n", convTemp);
			refresh();
			break;
		}
		if (c == 'C' || c == 'c')
		{
			printw("\nCelsius was selected!\nPlease enter the tempature in Fahrenheight : ");
			echo();
			wgetstr(stdscr, inputTemp);
			printw("float : %s\n", inputTemp);
			convTemp = (atof(inputTemp) - 32) * (5/9);
			printw("The temperature in Celsius is %.2f\n", convTemp);
			refresh();
			break;
		}
	}

	refresh();
	getchar();
	endwin();



	return 0;
}

