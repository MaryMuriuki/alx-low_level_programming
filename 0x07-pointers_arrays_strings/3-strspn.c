#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to get len from
 * @accept: string with characters to match with s
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, bytes, cap;

	bytes = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		cap = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				bytes++;
				cap = 1;
			}
		}
		if (cap == 0)
		{
			return (bytes);
		}
	}
	return (0);
}
