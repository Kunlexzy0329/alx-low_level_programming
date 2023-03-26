#include "main.h"
/**
 * print_square - function that a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar(35);
				if (b == size)
					_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
