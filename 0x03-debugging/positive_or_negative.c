#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/*
 * main: contains the code
 * return:0
*/
int main(void)
{
	int n;
	
	srand(time(-1));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
