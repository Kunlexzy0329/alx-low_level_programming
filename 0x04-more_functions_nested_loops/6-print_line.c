#include "main.h"
/**
 * print_line - function to draw a straight line
 *
 * @n: the number of times the character should be printed
 *
 */

void print_line(int n)
{
	int count;

	for (count = 0; count <= n; count++)
	{
		if (count < 0 || count == 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
