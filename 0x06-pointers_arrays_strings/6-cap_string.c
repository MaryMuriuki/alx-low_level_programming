#include "main.h"
/**
 * cap_string - will capitalize all words on a string
 * @s: string to capitalize
 * Return: The string in caps
 */
char *cap_string(char *s)
{
	int k, b;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};

	for (k = 0; s[k] != '\0'; k++)
	{
		if (k == 0 && s[k] >= 'a' && s[k] <= 'z')
			s[k] = s[k] - 32;

		for (b = 0; b < 13; b++)
		{
			if (s[k] == spe[b])
			{
				if (s[k + 1] >= 'a' && s[k + 1] <= 'z')
				{
					s[k + 1] = s[k + 1] - 32;
				}
			}
		}
	}
	return (s);
}
