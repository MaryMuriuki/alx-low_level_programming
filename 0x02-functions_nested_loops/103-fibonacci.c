#include <stdio.h>
/**
 * main -  write a program that finds and prints the s
 * um of the even-valued terms, followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	unsigned long int i, j, sum, next;

	i = 1;
	j = 2;
	sum = 0;

	for (n = 1; n <= 33; ++n)
	{
		if (i < 4000000 && (i % 2) == 0)
		{
			sum = sum + i;
		}
		next = i + j;
		i = j;
		j = next;
	}
	printf("%lu\n", sum);
	return (0);
}

