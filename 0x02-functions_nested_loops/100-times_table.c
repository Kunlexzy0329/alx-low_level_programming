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
	int mult;

	for (n = 0; n <= 12; n++)
	{
		for (m = 0; m <= 12; m++)
		{
			if (n < 0 || n > 15)
			{
				break;
			}

			mult = m * n;
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
