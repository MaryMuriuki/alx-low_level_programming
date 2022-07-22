#include "main.h"
/**
 * set_bit - sets the val of a bit to 1
 * @index: idex val
 * @n: pointer to no to change
 * Return: 1 success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
