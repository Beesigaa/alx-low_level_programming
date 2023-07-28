#include <stdio.h>
/**
 * main - Starting point
 * Return: Always 0 (Success)
 * output the integers of base ten starting from zero
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

