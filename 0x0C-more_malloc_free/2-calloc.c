#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be fillled
 * @b: chat to copy
 * @n: numner of times to copy
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for any array
 * @nmemb: array
 * @size: size of array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);
	return (pointer);
}

