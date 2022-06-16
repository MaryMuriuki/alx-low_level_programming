#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: less than 0 if s1 is less s2 and 0 if they are equal
 * more tan 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
