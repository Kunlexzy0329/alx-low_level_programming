#include "main.h"

/**
 * root_square - Returns the natural square root of a number
 * otherwise return 0.
 *@n: result to find.
 * @num: number multiply by itself give the result.
 * Return: root square of the number
 *
 */
int square_helper(int num, int n)
{
	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);
	else
		num++;
	return (square_helper(num, n));
}

/**
 * _sqrt_recursion - Function that give natural square root of a number
 *
 * @n: number to find the square.
 * Return: natural square root of a number.
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (square_helper(2, n));
}
