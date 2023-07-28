#include <stdio.h>
/**
 * main - Starting point
 * Return: Always 0 (Success)
 * Output the integers of base ten starting from zero
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
