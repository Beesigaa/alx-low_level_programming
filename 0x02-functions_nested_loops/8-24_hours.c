#include "main.h"
/**
 * jack_bauer - Prints the time count of the day number
 * Return: Returns void
 */
void jack_bauer(void)
{
	int Hr = 0;
	int Mins = 0;

    for (Hr = 0; Hr < 24; Hr++)
    {
	    for (Mins = 0; Mins < 60; Mins++)
	    {
		    _putchar(hr);
		    _putchar(':');
		    _putchar(mins);
		    _putchar('\n');
	    }
    }
}
