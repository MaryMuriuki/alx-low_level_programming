#include "main.h"
/**
 * binary_to_uint - converts a bin to unsigned int
 * @b: string to convert
 *
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int int_num = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		int_num = 2 * int_num + (b[j] - '0');
	}
	return (int_num);
}
