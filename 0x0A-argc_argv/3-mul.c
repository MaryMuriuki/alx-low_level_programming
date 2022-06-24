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
	leng = 0;
	val = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && d == 0)
	{
		if (s[a] == '-')
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
 * main - multiplies two nums
 * @argc: num of args
 * @argv: array of args
 * Return: 0 success, fail 1
 */
int main(int argc, char *argv[])
{
	int total, no1, no2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);
	total = no1 * no2;

	printf("%d\n", total);
	return (0);
}


