#include "main.h"
/**
 * factorial - function that calculate the factorial of a value
 * @n: the value
 * Return: integer value to the main function
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
