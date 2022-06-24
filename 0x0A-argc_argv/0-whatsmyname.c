#include <stdio.h>
#include "main.h"
/**
 * main - will print program name
 * @argc: is the no of arguments
 * @argv: an array of args
 * Return: 0 if successful
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
