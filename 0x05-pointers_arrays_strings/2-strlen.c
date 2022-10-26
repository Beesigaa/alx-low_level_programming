#include "main.h"
/**
*_strlen- Function to return length of string
*@s:string
*@ta: string counter
*Return: length
*/
int _strlen(char *s)
{
	int ta = 0; /*counter*/

	while (*s != '\0')
	{
		ta++;
		s++;
	}

	return (ta);
}
