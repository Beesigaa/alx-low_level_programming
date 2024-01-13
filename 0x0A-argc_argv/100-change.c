#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the minimum number of coins to make change for an amount of money.
  * @argc: argument count
  * @argv: argument vector
  * Return - always 0
  */
int main(int argc, char *argv[])
{
	/* Check the number of command-line arguments*/
	if (argc != 2) 
	{
		printf("Error\n");
		return 1;
	}
	/*Convert the command-line argument to an integer*/
	int cents = atoi(argv[1]);
	/*Check if the amount is negative*/
	if (cents < 0)
	{
		printf("0\n");
		return 0;
	}
	/*Array to store the number of each coin*/
	int coins[] = {25, 10, 5, 2, 1};
	/*Calculate the minimum number of coins needed*/
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		/*Calculate the number of coins of current value*/
		int currentCoins = cents / coins[i];
		/*Update the count*/
		count += currentCoins;
		/*Update the remaining cents*/
		cents %= coins[i];
		/*Print the number of coins used*/
		printf("%d cent(s) of value %d\n", currentCoins, coins[i]);
	}
	/*Print the total number of coins used*/
	printf("Minimum number of coins: %d\n", count);
	return 0;
}
