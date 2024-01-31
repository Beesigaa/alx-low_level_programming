#include "main.h"
/**
 * _isalpha - function main to check for alphabetic character
 * @ch: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	return (0);
}
