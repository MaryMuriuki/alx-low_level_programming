#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: string to e printed b2n numbers
 * @n: number of integers to be passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && j == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
