#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print,1-file descriptor
 *     1-number of bytes
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
