#include "main.h"
/**
 * _islower - lowercase character validation
 * @c: Stores character in int
 * Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
