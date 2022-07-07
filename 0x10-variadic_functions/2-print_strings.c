#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: string to brinted b2n strings
 * @n: numer of strings to be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && j == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list);
}
