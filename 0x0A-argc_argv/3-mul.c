#include "main"
#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the multiplication of two integers
* @argc: argument count
* @argv: argument vector
* Return: 0 if true, 1 if false
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
