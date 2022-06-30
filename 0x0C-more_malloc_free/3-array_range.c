#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array onf integers
 * @min: minimum value in array
 * @max: maximum value of array
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int a, size;
	int *pointer;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		pointer[a] = min++;
	return (pointer);
}
