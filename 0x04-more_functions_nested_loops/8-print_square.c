#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of squares/number of times
 * Return: empty
*/
void print_square(int size)
{
	int m, n;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
