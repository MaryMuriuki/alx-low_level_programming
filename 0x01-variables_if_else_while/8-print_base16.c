#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16 in lowercase
 * Return: 0 if it exits without error
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
