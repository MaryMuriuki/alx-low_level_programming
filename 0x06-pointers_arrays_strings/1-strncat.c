#include "main.h"
/**
 * _strncat - combines n bytes from one str to another
 *  @src: Source string
 *  @dest: Destination string
 *  @n: no of bytes of str to combine
 *  Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] =  src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
