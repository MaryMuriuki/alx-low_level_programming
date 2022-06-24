#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: number of args
 * @argv: an array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
