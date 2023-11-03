#include "main.h"
/**
 * _islower - lowercase character validation
 * @ch: Stores character in int
 * Return: 1 if ch is lowercase, 0 otherwise
*/
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	return (0);
}
