#include "main.h"
/**
 * print_line - function to draw a straight line
 *@n: number to be printed
 *Return: Always void.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 1 ; line <= n ; line++)
			_putchar(95);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
