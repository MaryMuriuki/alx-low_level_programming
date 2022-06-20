#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to locate character from
 * @c: character to be located
 * Return: pointer to first occurence of c or NULL if character does not exist
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
