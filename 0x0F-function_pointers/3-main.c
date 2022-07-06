#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - programs that performs arithmetic operations
 * @argc: number of args
 * @argv: array of args
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, rs;
	char output;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	output = *argv[2];

	if ((output == '/' || output == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	rs = func(arg1, arg2);
	printf("%d\n", rs);
	return (0);
}
