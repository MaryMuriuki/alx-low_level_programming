#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2d array of ints
 * @width: of array
 * @height: of array
 * Return: NULL on failure or when width or height is
 * negative or 0
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = (int *) malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			free(array);
			for (b = 0; b <= a; b++)
				free(array[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}


