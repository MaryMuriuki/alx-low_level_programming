#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints minimum no of coins to make
 * change for for an amount of money
 * @argc: no of args
 * @argv: array of args
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int digit, i, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	digit = atoi(argv[1]);
	output = 0;

	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && digit >= 0; i++)
	{
		while (digit >= coins[i])
		{
			output++;
			digit -= coins[i];
		}
	}
	printf("%d\n", output);
	return (0);
}
