#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints a sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int b;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (b = 0; b < size; b++)
	{
		sum = sum + a[(size * b) +  b];
		sum1 = sum1 + a[(size * (b + 1)) - (b + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
