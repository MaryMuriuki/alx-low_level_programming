#include "main.h"
/**
 * *_memset - will fill memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of times b is copied
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
