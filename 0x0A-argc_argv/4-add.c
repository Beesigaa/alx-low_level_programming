#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
/**
* main - add positive numbers
* @argc: argument counter
* @argv: argument vector
* Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int count;
	int add_int = 0;
	int sum = 0;
	char *naaaa;

	count = 1;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (; count < argc; count++)
	{
		add_int = strtol(argv[count], &naaaa, 10);
		if (*naaaa == '\0')
		{
			sum += add_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
