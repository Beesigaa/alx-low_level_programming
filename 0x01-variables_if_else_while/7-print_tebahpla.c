#include <stdio.h>
/**
 * main - Starting point of code
 * Return: Always (0) (Success)
 * Printing all the alphabets in lower case
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
