#include "main.h"
/**
*swap_int-Function to swap integers
*@a: pointer to first integer
*@b: pointer to second integer
*swmp:swap variable
*return: int
*/
void swap_int(int *a, int *b)
{
	int swmp;

	swmp = *a;
	*a = *b;
	*b = swmp;
}
