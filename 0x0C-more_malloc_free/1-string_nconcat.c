#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - combines two strings
 * @s1: string to combine
 * @s2: string to combine
 * @n: bytes to form s2 to add to s1
 * Return: NULL for failure || ponter to result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rs;
	unsigned int a, b, leng1, leng2;

	a = 0;
	b = 0;
	leng1 = 0;
	leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	if (n < leng2)
		rs = malloc(sizeof(char) * (leng1 + n + 1));
	else
		rs = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (!rs)
		return (NULL);
	while (a < leng1)
	{
		rs[a] = s1[a];
		a++;
	}
	while (n < leng2 && a < (leng1 + n))
		rs[a++] = s2[b++];

	while (n >= leng2 && a < (leng1 + leng2))
		rs[a++] = s2[b++];
	rs[a] = '\0';
	return (rs);
}
