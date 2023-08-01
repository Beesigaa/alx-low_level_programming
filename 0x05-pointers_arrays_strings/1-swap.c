#include "main.h"
/**
 * swap_int-Function to swap integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * return: int
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

