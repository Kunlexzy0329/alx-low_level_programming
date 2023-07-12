#include "main.h"

/**
 *_sqrt_recursion_helper - help function
 *@n: the square root number
 *@start: the begining of the number
 *@end: the end
 *Return: the square root number
 */

int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid, midsquare;

	if (start == end)
	{
		if (start * start == n)
			return (start);
		else
			return (-1);
	}
	mid = (start + end) / 2;
	midsquare = mid * mid;
	if (midsquare == n)
		return (mid);
	else if (midsquare < n)
		return (_sqrt_recursion_helper(n, mid + 1, end));
	else
		return (_sqrt_recursion_helper(n, start, mid - 1));
}

/**
 *_sqrt_recursion- the recursion function
 *@n: the number
 *Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 0, n / 2));
}
