#include "main.h"
int isitwild(char *s1, char *s2);
char *see(char *s2);
/**
 * wildcmp - will compare two strs recursively
 * to check for wildcards expansions
 * @s1: string 1
 * @s2: string 2 for comparison
 * Return: 1 if strings are identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*see(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == '*')
	{
		s2 = see(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum = sum + wildcmp(s1 + 1, s2 + 1);
		sum = sum + isitwild(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}

/**
 * isitwild - willcheck recursively for paths when characterts
 * are equal
 * @s1: string 1
 * @s2: string 2
 * Return: value of wildcmp or itself
 */
int isitwild(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (isitwild(s1 + 1, s2));
}

/**
 * *see - moves the current char past the *
 * @s2: string to iterate
 * Return: address of the character after *
 */
char *see(char *s2)
{
	if (*s2 == '*')
		return (see(s2 + 1));
	else
		return (s2);
}

