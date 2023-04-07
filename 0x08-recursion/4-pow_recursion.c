#include "main.h"
/**
 * _pow_recursion - funtion that returns the power of a number
 *@x: the whole number
 *@y: the power
 *Return: integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
