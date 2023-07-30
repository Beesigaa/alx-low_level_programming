#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Always nothing
 */
void times_table(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar('0' + (m * n));
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
