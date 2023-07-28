#include <stdio.h>
/**
 * main - utput integers
 * Return: Always 0 (Success)
 * Output the integers of base ten starting from zero
 */
int main(void)
{
	int n1 = 0;
	int n2;

	while (n1 <= 99)
		{
			n2 = 0;
			while (n2 <= 99)
			{
				if (n2 != n1)
				{
					putchar((n2 / 10) + 48);
					putchar((n2 % 10) + 48);
					putchar (' ');
					putchar((n1 / 10) + 48);
					putchar ((n1 % 10) + 48);
					if (n2 != 98 || n1 != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n2++;

			}
			n1++;
		}
		putchar('\n');
		return (0);
}
