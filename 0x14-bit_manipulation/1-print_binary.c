#include "main.h"
/**
 * print_binary - prints binary equal to a decimal num
 * @n: number to print binary
 */
void print_binary(unsigned long int n)
{
	int j, incr = 0;
	unsigned long int present;

	for (j = 63; j >= 0; j--)
	{
		present = n >> j;

		if (present & 1)
		{
			_putchar('1');
			incr++;
		}
		else if (incr)
			_putchar('0');
	}
	if (!incr)
		_putchar('0');
}
