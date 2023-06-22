#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that sum all the argument pass
 *@n: number of the argument pass
 *@... : unknown parameters
 *Return: sum to the main function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}