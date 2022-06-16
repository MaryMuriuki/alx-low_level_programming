#include "main.h"
/**
 * _strcat - combines two strings
 * @src: String to add
 * @dest: String to append to
 * Return: a pointer to appeded string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
