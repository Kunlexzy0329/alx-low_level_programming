#include "main.h"
/**
 * _sqrt_recursion - recursive function to return sqrt
 * @n: the parameter
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 1)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	while (i * i <= n)
	{	i++;
	}
	return (_sqrt_recursion(n - i + 1));
}
