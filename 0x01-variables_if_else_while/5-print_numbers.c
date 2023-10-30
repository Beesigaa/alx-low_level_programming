#include <stdio.h>
/**
 * main - Starting point of the code
 * Return: Always 0 (Success)
 * Output the integers of base ten starting from zero
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
