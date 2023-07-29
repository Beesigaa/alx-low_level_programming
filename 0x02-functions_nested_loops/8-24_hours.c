#include "main.h"
/**
 * jack_bauer - Prints the time count of the day number
 * Return: Returns void
 */
void jack_bauer(void)
{
	int hr, mins;

    for (hr = 0; hr < 24; hr++)
    {
	    for (mins = 0; mins < 60; mins++)
	    {
            _putchar(hr + ":");
	    _putchar(mins + "\n")
	    }
    }
    return (0);
}
