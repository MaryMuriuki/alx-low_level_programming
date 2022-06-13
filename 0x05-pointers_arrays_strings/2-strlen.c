#include "main.h"
/**
 *  _strlen - return len of str
 * @s: string to be printed
 *Return: len of string
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	
	return (l);
}
