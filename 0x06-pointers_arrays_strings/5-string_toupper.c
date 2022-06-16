#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: String to change
 * Return: The result string
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 32;
	}
	return (s);
}
