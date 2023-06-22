#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_numbers - function that print numbers
 *@separator: the sepator
 *@n: the number
 *@...: it takes different number
 *Return : return num
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
