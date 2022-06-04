#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of base 10
 * Return: 0 if it exits properly
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
