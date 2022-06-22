#include "main.h"
int isit_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string being checked
 * Return: 1 if it is 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (isit_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length
 * Return: length os string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * isit_pal - checks the string's characters
 * recursively for a palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 for palindrome 0 if not
 */
int isit_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (isit_pal(s, i + 1, len - 1));
}
