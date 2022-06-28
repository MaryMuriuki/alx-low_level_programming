#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of characters and
 * initializes it with a specific char
 * @c: character to initialize the array c
 * @size:size of array to create
 * Return: NULL if size = 0  or if it fails ||
 *a ponter to the array
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	pointer = (char *) malloc(sizeof(char) * size);

	if (pointer == NULL)
		return (0);

	while (i < size)
	{
		*(pointer + i) = c;
		i++;
	}
	*(pointer + i) = '\0';
	return (pointer);
}



