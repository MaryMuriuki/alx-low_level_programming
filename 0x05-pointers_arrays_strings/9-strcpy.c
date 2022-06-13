#include "main.h"
/**
 * _strcpy - copies string pointed to by src including terminating
 * null byte \0 to buffer pointed to dest
 * Return: pointer to dest
 * @dest: pointer to buffer where strin is copied
 * @src: the string to be copied
 */
char *_strcpy(char *dest, char *src)
{
	int leng, a;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (a = 0; a < leng; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
