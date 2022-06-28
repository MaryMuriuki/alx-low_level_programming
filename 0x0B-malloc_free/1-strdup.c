#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a copy of the strin given as a parameter
 * @str: String given to duplicate
 * Return: NULL if str = NULL || if insufficient memory
 * return pointer to duplicated string on success
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, leng;

	i = 0;
	leng = 0;

	if (str == NULL)
		return (NULL);
	while (str[leng])
		leng++;

	copy = malloc(sizeof(char) * (leng + 1));

	if (copy == NULL)
		return (NULL);

	while ((copy[i] = str[i]) != '\0')
		i++;
	return (copy);
}
