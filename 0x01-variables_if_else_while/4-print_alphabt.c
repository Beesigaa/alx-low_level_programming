#include <stdio.h>
/**
 * main - Starting point of the code
 * Return: Always 0 (Success)
 * Printing all the alphabets in lower case except q and e
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'q')
			continue;
		else if (alp == 'e')
			continue;
		putchar (alp);
	}
	putchar ('\n');
	return (0);
}
