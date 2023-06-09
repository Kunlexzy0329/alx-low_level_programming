#include "main.h"


/**
 *_sqrt_searcher - function that help in of search square root of number
 * @s: start number to be searched
 * @n: naturer number serching for
 * @e: ending
 * Return: result always
 */
int _sqrt_searcher(int n, int s, int e)
{
	int sqrt;
	int m;

	if (s > e)
		return (-1);
	m = (s + e) / 2;
	sqrt = m * m;
	if (sqrt == n)
		return (m);
	else if (sqrt < n)
		return (_sqrt_searcher(n, m + 1, e));
	else
		return (_sqrt_searcher(n, s, m - 1));
}
/**
 *_sqrt_recursion - function that print the square root of number
 * @n: positive number to be printed
 * Return: result always
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_searcher(n, 0, n));
}
