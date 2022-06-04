#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of base 10
 * Return: 0 if it exits properly
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
