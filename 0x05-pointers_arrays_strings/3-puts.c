#include "main.h"
/**
 * _puts - print a string
 * @str: pointer to the string being printed
 */
void _puts(char *str)
{
	int this;

	for (this = 0; str[this] != '\0'; this++)
	{
		_putchar(str[this]);
	}
	_putchar('\n');
}
