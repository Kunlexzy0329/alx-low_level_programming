#include "variadic_functions.h"

/**
 *print_strings - print the string provided
 *@separator: the delimeters
 *@n: the size ofthe string
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (*str != '\0')
			printf("%s", str);
		if (str == NULL)
			printf("(nill)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
