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
	char **ptr;

	i = 0;
	ptr = &s;
	for (i = 0; i < n; i++)
		*(*ptr + i) = b;
	return (*ptr);
}
