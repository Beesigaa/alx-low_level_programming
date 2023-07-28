#include <stdio.h>
/**
 * main - Starting point of the code
 * Return: Always 0 (Success)
 * Printing all the alphabets in lower case except q and e
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q')
			continue;
		else if (a == 'e')
			continue;
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
