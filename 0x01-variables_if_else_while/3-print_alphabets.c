#include <stdio.h>
/**
 * main - Starting point of the code
 * Return: Always 0 (Success)
 * Prints the alphabet in lowercase, and in uppercase
 */
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc  <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}

