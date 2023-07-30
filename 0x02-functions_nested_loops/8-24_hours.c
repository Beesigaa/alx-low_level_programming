#include "main.h"
/**
 * jack_bauer - Prints the time count of the day number
 * Return: Returns void
 */
void jack_bauer(void)
{
	int Hr;
	int Mins;

    for (Hr = 0; Hr < 24; Hr++)
    {
	    for (Mins = 0; Mins < 60; Mins++)
	    {
		    _putchar((Hr / 10) + '0');
		    _putchar((Hr % 10) + '0');
		    _putchar(':');
		    _putchar((Mins / 10) + '0');
		    _putchar((Mins % 10) + '0');
		    _putchar('\n');
	    }
    }
}
