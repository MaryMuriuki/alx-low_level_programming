#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int a, b, leng;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	leng = a;

	for (b = leng - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
