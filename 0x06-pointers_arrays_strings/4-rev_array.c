#include "main.h"
/**
 * reverse_array - will reverse an array
 * @a: the array to be reversed
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, b, k;

	b = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[b];
		a[b--] = k;
	}
}
