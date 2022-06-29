#include "main.h"
#include <stdlib.h>
/**
 * argstostr - combines all args of a program
 * @ac: number of args
 * @av: array or args
 * Return: pointer to new string or
 * NULL if it fails or
 * if ac is 0 and av is null
 */
char *argstostr(int ac, char **av)
{
	char *rs;
	int a, b, c, leng;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			leng++;
		leng++;
	}

	rs = malloc(sizeof(char) * (leng + 1));

	if (rs == NULL)
	{
		free (rs);
		return (NULL);
	}

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			rs[c] = av[a][b];
			c++;
		}
		rs[c] = '\n';
		c++;
	}
	return (rs);
}
