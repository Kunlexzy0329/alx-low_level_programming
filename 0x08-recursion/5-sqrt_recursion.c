#include "main.h"
/**
 * _sqrt_recursion - recursive function to return sqrt
 * @n: the parameter
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (n);
	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		return (i);
	}
	return (-1);
}
