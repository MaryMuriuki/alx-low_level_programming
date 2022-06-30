#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 * @ptr: pointer to memory previously allocated
 * with a call to malloc
 * @old_size: size in bytes of allocates space for ptr
 * @new_size: new size of new memory block
 * Return: pointer to new mmemory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	char *opointer;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer = malloc(new_size);
	if (!pointer)
		return (NULL);

	opointer = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			pointer[a] = opointer[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			pointer[a] = opointer[a];
	}
	free(ptr);
	return (pointer);
}
