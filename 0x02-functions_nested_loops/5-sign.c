#include "main.h"
/**
 * print_sign - Function that prints the sign of a number
 * @nu: The number to be checked
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */
int print_sign(int nu)
{
	if (nu > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (nu < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
