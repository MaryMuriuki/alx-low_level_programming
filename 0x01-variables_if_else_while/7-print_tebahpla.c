#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse
 * Return: 0 if it exits without error
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
