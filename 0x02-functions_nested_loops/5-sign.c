#include "main.h"
/**
 * print_sign- fuction that print sign
 * @n: parameter to determine the sign to be printed
 * if- a conditional statement that print the respective sign
 * return 1 if n is greater than 0 and
 * return 0 if n is equal to 0 and also
 * return -1 if n is less than 0
 *
 * Return:0 always
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		_putchar(44);
		_putchar(20);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar(44);
		_putchar(20);
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(44);
		_putchar(20);
		return (-1);
	}
}
