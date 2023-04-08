#include "main.h"
/**
 *is_prime_number - to print prime number
 *@n: the parameter
 *Return: 1 if prime and 0 if otherwise
 */

int is_prime_number(int n)
{
	if(n <= 1)
		return (0);
	else if (n / n == 1 && n % 2 == 1)
		return (1);
	is_prime_number(n - 1);
	return (0);
}
