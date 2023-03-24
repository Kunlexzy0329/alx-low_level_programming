#include "main.h"
/**
 * print_last_digit - fuction that print last digit
 * @i: function parameter
 * Return: k
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;

	if (i < 0)
		last = -(last);
	_putchar(last + '0');
	return (last);
}
