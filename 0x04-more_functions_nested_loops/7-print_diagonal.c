#include "main.h"
/**
 * print_diagonal - function that draw a diagonal line
 *
 * @n: number of times the line \ should be printed
 */

void print_diagonal(int n)
{
	int count;
	int count1;

	if (n > 0)
	{
		for (count = 0; count <= n; count++)
		{
			for (count1 = 1; count1 <= count; count1++)
			{
				if (count1 != count)
					_putchar(' ');
				if (count1 == count)
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
	else
	_putchar('\n');
}
