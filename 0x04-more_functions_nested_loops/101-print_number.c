#include "main.h"
void print_digits(int num);
/**
 *print_number- function that print an integer
 *@n: the integer number
 *Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n > 9 || n < -9)
		print_digits(n);
	if (n < 0)
		_putchar(((n % 10) * -1) + '0');
	else
		_putchar((n % 10) + '0');
}

/**
* print_digits - recursive function to print all previous digits in num
* @num: number to print previous digits of numbers
* Return: void
*/
void print_digits(int num)
{
	if (((num / 10) < -9) || ((num / 10) > 9))
	{
		print_digits(num / 10);
		if (num < 0)
			_putchar((((num / 10) % 10) * -1) + '0');
		else
			_putchar(((num / 10) % 10) + '0');
	}
	else
	{
		if (num < 0)
			_putchar(((num / 10) * -1) + '0');
		else
			_putchar((num / 10) + '0');
	}
}
