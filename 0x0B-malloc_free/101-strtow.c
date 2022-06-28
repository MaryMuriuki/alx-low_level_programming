#include "main.h"
#include <stdlib.h>
/**
 * word_c - counts number of words in string
 * @s: string
 * Return: no of words
 */
int word_c(char *s)
{
	int calc, words, a;

	calc = 0;
	words = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			calc = 0;
		else if (calc == 0)
		{
			calc = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: string tobe split
 * Return: NULL if str = NULL or "" or if it fails
 */
char **strtow(char *str)
{
	char **array, *tmp;
	int a, b, leng, neno, c, start, end;

	b = 0;
	leng = 0;
	c = 0;

	while (*(str + leng))
		leng++;
	neno = word_c(str);
	if (neno == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (neno + 1));
	if (array == NULL)
		return (NULL);

	for (a = 0; a <= leng; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char *) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	array[b] = NULL;
	return (array);
}

