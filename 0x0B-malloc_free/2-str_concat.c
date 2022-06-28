#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two strings
 * @s1: string to combine
 * @s2: strig to combine
 * Return: pointer to memory space with s1 and s2 && NULL
 * on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *rs;
	unsigned int a, b, leng1, leng2;

	a = 0;
	b = 0;
	leng1 = 0;
	len2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	rs = malloc(sizeof(char) * (leng1 + leng2));
	if (rs == NULL)
		return (NULL);

	if (s1)
	{
		while (a < leng1)
		{
			rs[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (leng1 + leng2))
		{
			rs[a] = s2[b];
			a++;
			b++;
		}
	}
	rs[a] = '\0';
	return (rs);
}
