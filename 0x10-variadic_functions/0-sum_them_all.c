#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all- variadic function to sum up all arguments
 *@n:the size of the argument
 *@...: indefinite argument
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsugned int i;
	va_list x;
	
	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(x, int);
	}
	va_end(x);
	return (sum);
}
