#include "main.h"
/**
*_strlen- Function to return length of string
*@s:string
*@longi: string counter
*Return: length
*/
int _strlen(char *s)
{
	int longi = 0; /*counter*/

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
