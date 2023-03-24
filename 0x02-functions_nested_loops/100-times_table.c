#include "main.h"
/**
 * print_times_table - function that print times table
 * @n : parameters that is multiplied with
 *
 * mult : takes the multiplication of both values
 * Return : void
 */

void print_times_table(int n)
{
	int m;
	int a;
	int mult;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; n++)
		{
			_putchar('0');
			for (m = 0; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				mult = a * m;
				if (mult <= 99)
					_putchar(' ');
				if (mult <= 9)
					_putchar(' ');
				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10)) % 10 + '0');
				}
				else if (mult <= 99 && mult >= 10)
				{
					_putchar((mult / 10) + '0');
				}
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
	else if (n < 0 || n > 15)
	{
		putchar('\n');
	}
}
