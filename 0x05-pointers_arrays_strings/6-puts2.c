#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string from where to print the characters from
 */
void puts2(char *str)
{
	int leng, i;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}

	for (i = 0; i < leng; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
