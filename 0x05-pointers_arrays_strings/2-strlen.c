#include "main.h"
/**
*_strlen- Function to return length of string
*@s:string
*@t: string counter
*Return: length
*/
int _strlen(char *s)
{
	int t;

	t = 0;
	while (*s != '\0')
	{
		t++;
		s++;
	}

	return (t);
}
