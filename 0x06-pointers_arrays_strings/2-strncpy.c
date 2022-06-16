#include "main.h"
/**
 * _strncpy - copies string
 * @src: src string
 * @dest: destination string
 * @n: no of bytes to copy
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
