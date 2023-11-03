#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Always nothing
 */
void times_table(void)
{
	int m, n, ans;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			ans = m * n;
			if (ans < 10)
				_putchar(ans + '0');
			else
			{
				_putchar((ans / 10) + '0');
				_putchar(((m * n) % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
