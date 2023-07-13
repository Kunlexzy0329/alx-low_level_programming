#include "main.h"

/**
 * print_triangle - function that print a triangle.
 * @size: Size of the triangle.
 *Return: void.
 */
void print_triangle(int size)
{
	int r, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1 ; r <= size ; r++)
		{
			for (c = 1 ; c <= size ; c++)
			{
				if (c <= size - r)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
