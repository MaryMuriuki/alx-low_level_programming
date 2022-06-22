#include "main.h"
int thee_prime(int n, int i);
/**
 * is_prime_number - returns integer if it is a prime number
 * @n: number to check
 * Return: 1 of prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (thee_prime(n, n - 1));
}

/**
 * thee_prime - will calculate if a number is a prime
 * recursively
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime 0 otherwise
 */
int thee_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (thee_prime(n, i - 1));
}
