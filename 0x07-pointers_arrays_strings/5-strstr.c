#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: string to search substring
 * @needle: substring to locate in haystack
 * Return: pointer to start of located substring or
 * NULL if sustring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int ssh, ssn;

	for (ssh = 0; haystack[ssh] != '\0'; ssh++)
	{
		for (ssn = 0; needle[ssn] != '\0'; ssn++)
		{
			if (haystack[ssh + ssn] != needle[ssn])
				break;
		}
		if (!needle[ssn])
			return (&haystack[ssh]);
	}
	return (NULL);
}
