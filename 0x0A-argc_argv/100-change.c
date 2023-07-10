#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints tha change process with five coins
 * @argc: argument count
 * @argv: argument vector
 * Return: value
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, min_c = 0;
	int numcoins = sizeof(coins) / sizeof(coins[0]);
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < numcoins; i++)
	{
		min_c += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", min_c);
	return (0);
}
