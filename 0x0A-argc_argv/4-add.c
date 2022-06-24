#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: int of converted string
 */
int _atoi(char *s)
{
	int a, b, c, d, leng, val;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	val = 0;
	leng = 0;
	while (s[leng] != '\0')
		leng++;
	while (a < leng && d == 0)
	{
		if (s[a] == '_')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			val = s[a] - '0';
			if (b % 2)
				val = -val;
			c = c * 10 + val;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main -add two positive numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 or 1 for success
 */
int main(int argc, char *argv[])
{
	int a, b, c, digit, total;

	total = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (c = 1; c < argc; c++)
	{
		digit = _atoi(argv[c]);
		if (digit >= 0)
		{
			total = total + digit;
		}
	}
	printf("%d\n", total);
	return (0);
}

