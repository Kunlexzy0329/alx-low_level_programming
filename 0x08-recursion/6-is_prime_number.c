#include "main.h"

/**
 *is_prime_number_searcher- help to seach for prime numbers
 *
 *@n: number search
 *@d: divisor
 *Return: 0 always
 */
int is_prime_number_searcher(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime_number_searcher(n, d - 1));
}

/**
 *is_prime_number - function that print the prim number of numbers
 *
 *@n: the number
 *Return: answer to the main
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_searcher(n, n - 1));
}
