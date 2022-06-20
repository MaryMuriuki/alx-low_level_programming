#include "main.h"
#include <stdio.h>
/**
 * _strpbrk -locates the first occurence in the string
 * s of bytes in string accept
 * @s: string to be searched
 * @accept: string to be compared to for a match
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept or
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int bs, ba;

	for (bs = 0; *s != '\0'; bs++)
	{
		for (ba = 0; accept[ba] != '\0'; ba++)
		{
			if (*s == accept[ba])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
