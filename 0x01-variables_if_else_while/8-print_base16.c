#include <stdio.h>
/**
 * main - Starting point
 * Return: Always 0 (Success)
 * output the integers of base ten starting from 0
 */
int main(void)
{
	int n;
	char alp;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
