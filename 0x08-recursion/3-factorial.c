#include "main.h"
/**
 *factorial - function that calculate the factoria of numbers
 *@n: number to calculate
 * Return: result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
