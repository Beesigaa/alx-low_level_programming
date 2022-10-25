#include "main.h"
/**
*swap_int-Function to swap integers
*@a: pointer to first integer
*@b: pointer to second integer
*swamp_them:swap variable
*return: int
*/
void swap_int(int *a, int *b)
{
	int swamp_them;

	swamp_them = *a;
	*a = *b;
	*b = *a;
}
