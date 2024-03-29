#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Always nothing
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;
			if (column == 0)
				_putchar('0');
			else
				_putchar(',');
			_putchar(' ');
			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			if (column == 9)
				_putchar('\n');
		}
	}
}
