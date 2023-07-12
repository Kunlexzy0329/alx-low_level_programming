#include "main.h"

/**
 *_pow_recursion- index function
 *@x: the index base number
 *@y: the index
 * Return: index number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
