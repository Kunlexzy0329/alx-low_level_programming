#include "variadic_functions.h"

/**
 *print_numbers - function to print number
 *@separator: the separator
 *@n: numbers
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i, number;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(num, unsigned int);
		printf("%d", number);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
