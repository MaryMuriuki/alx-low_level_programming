#include "main.h"
/**
 * swap_int - swaps the values of two ints
 * @a: pointer to value 1
 * @b: pointer to vale 2
 */
void swap_int(int *a, int *b)
{
	int addr;

	addr = *a;
	*a = *b;
	*b = addr;
}
