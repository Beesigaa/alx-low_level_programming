#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @nu: The number to be treated
 * Return: Value of the last digit of number
 */
int print_last_digit(int nu)
{
	int lD;

	lD = nu % 10;
	if (lD < 0)
	{
		lD = lD * -1;
	}
	_putchar(lD + '0');
	return (lD);
}
