#include "main.h"

/**
 *is_prime_num_checker- function that check if number is prime or not
 *@n: the number
 *@div: divisor
 *Return: result to the prime_number function
 */

int is_prime_num_checker(int n, int div)
{
	if (n < 2)
		return (0);
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_num_checker(n, div + 1));
}

/**
 *is_prime_number- prime number function
 *@n: the number
 *Return: answer to the main
 */
int is_prime_number(int n)
{
	return (is_prime_num_checker(n, 2));
}
