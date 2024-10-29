#include <stdio.h>
#include <termios.h>
#include "terminal.h"

/* Only using single global variable for signal handling as there is no better way to do so */
int signalVal = -1;

int main(void)
{
	/* simple showcase of setup */

	struct termios settings;
	
	// Sets up the terminal settings
	TSetup(&settings);

	//runGame()
	
	// Resets the terminal settings

	TReset(&settings);
	return 0;
}
