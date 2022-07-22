#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n:  number to be searched
 * @index: index value of the bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_in_bit;

	if (index > 63)
		return (-1);

	val_in_bit = (n >> index) & 1;

	return (val_in_bit);
}
