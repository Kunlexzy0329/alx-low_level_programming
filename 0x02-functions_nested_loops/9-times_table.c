#include "main.h"
/**
 * times_table - function that print the 9 times table with 0
 * @i and @j: parameter to be multiplied
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j > 9)
			{
				x = (i * j) % 10;
				y = ((i * j) - x) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(y + '0');
				_putchar(x + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
		}
		_putchar('\n');
	}
}
