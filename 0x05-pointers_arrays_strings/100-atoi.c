#include "main.h"
/** 
 * _atoi - convert string to integer
 * @s: string to be converted
 * Return: the converted string in the form of int
 */
int _atoi(char *s)
{
	int leng, val, a, b, c, d;

	leng = 0;
	val = 0;
	a = 0;
	b = 0;
	c = 0;
	d = 0;

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
