#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: checks this character
 * Return: 1 if c is a letter in lc or uc, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));}
