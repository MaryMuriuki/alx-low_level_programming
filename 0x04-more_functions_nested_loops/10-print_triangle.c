#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of triangle
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 1 ; j--)
			{
				_putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
