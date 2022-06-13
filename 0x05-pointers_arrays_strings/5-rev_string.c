#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char store;
	int a, leng, leng1;

	leng = 0;
	leng1 = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}

	leng1 = leng - 1;

	for (a = 0; a < leng / 2; a++)
	{
		store = s[a];
		s[a] = s[leng1];
		s[leng1--] = store;
	}
}
