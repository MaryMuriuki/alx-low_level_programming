#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string to be divided to two
 */
void puts_half(char *str)
{
	int a, b, leng;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}

	if (leng % 2 == 0)
	{
		for (a = leng / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
		else if (leng % 2)
		{
			for (b = (leng - 1) / 2; b < leng - 1; b++)
			{
				_putchar(str[b + 1]);
			}
		}
		_putchar('\n');
}
