#include "main.h"
int thee_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the squareroot of a natural number
 * @n: natural number
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (thee_sqrt_recursion(n, 0));
}

/**
 * thee_sqrt_recursion - will recurse to find a natural
 * square root of a number
 * @n: natural number to sqrt
 * @i: iterator
 * Return: Square root
 */
int thee_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (thee_sqrt_recursion(n, i + 1));
}
