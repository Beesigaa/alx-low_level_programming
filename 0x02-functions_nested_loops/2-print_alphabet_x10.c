#include "main.h"
/**
 *print_alphabet_x10 - Print char
 *Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char alp;
	int n = 0;

	while (n < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		n++;
	}
}
