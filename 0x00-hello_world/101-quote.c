#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a full sentence str
 * Return: 1 exits
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}

