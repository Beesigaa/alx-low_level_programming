#include "main.h"
/**
  * print_to_98 - output natural numbers to 98
  * @n: natural number
  * Return: void
  */
void print_to_98(int n)
{
	if (n >= 0)
		for (; n < 99; n++)
		{
			if (n < 10)
				_putchar("n")
			else
			{
				_putchar((n / 10) + "0");
				_putchar((n % 10));
			}
		}
}
