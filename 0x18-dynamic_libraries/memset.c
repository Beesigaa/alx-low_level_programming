#include "main.h"
/**
* _memset()- Function that fills the first n bytes of the memory area
* pointed to by s with the constant byte b
* @s: Pointer to char address
* @b: Char identifier
* @n: Integer variable
* Return: A pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
