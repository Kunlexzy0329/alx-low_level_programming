#include "main.h"

/**
 *factorial- factoria function
 *@n: the number
 *Return: the factoria number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
