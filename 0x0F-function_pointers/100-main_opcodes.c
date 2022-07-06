#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes
 * @argc: number of args
 * @argv: array of args
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	int j, bytes;
	char *matrix;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	matrix = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", matrix[j]);
			break;
		}
		printf("%02hhx ", matrix[j]);
	}
	return (0);
}
