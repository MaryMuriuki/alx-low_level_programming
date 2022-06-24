#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed to the program
 * @argc: number of args
 * @argv: an array of args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
