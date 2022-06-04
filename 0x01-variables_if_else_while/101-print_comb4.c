#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 if it exits without error
 */
int main(void)
{
	int l, m, n;

	for (l = 48; l < 58; l++)
	{
		for (m = 49; m < 58; m++)
		{
			for (n = 50; n < 58; n++)
			{
				if (n > m && m > l)
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (l != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
