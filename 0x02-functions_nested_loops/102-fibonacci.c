#include <stdio.h>
/**
 * main - print the frist 50 fibonacci numbers
 * starting with 1 and 2
 * Return: 0 if successful
 */
int main(void)
{
	long a, b, c, next;

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		next = b + c;
		b = c;
		c = next;
	}
	return (0); }
