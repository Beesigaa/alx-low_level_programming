#include <stdio.h>
#include <unistd.h>
/**
 *main- Starting point of the program
 *Return: value would be 1
 *returns or print output to the standard error
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
