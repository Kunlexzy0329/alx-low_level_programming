#include "main.h"
/**
 *_pow_recursion - function that print the power of a number
 *@x: the base number
 *@y: the index number
 *Return: result of the recursion
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
