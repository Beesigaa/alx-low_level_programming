#include <stdio.h>
/**
* main - Starting point of the code
* Return: Always (0) (Success)
* printing all the alphabets in lower case
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

