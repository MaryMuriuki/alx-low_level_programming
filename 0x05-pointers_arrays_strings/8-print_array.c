#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements of the array to be printed
 * @a: array to be printed
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == 0)
			printf("%d", a[k]);
		else
			printf(", %d", a[k]);
	}
	printf("\n");
}
