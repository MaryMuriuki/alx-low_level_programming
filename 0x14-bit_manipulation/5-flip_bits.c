#include "main.h"
/**
 * flip_bits - returns no of bits you would need to flip
 * to get from a no to another
 * @n: first no
 * @m: seconf no
 * Return: no of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, incr = 0;
	unsigned long int present;
	unsigned long int maine = n ^ m;

	for (j = 0; j >= 0; j--)
	{
		present = maine >> j;
		if (present & 1)
			incr++;
	}
	return (incr);
}
