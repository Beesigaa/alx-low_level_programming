#include "main.h"
/**
* print_alphabet - Output alphabets lowercase character
* Return: void
*/
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
