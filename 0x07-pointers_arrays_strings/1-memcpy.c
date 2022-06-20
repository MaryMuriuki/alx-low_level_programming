#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory areas
 * @src: source memory area we are copying from
 * @n: number of bytes to be copied
 * Return: pointer to dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
