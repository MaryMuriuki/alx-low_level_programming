#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - returns index of the first element for which
 * the cmp pointer does not return a 0
 * @size: size of array
 * @array: array yo iterate over
 * @cmp: pointer to function to be used
 * Return: index of first element || -1 for no element or if size
 * <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}
	return (-1);
}
