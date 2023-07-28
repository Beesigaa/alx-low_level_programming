#include <stdio.h>
/**
 * main - Starting point of code
 * Return: Always (0) (Success)
 * Printing all the alphabets in lower case
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
