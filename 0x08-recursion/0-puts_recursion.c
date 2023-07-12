#include "main.h"

/**
 *_puts_recursion - recursion funtion that print string
 *
 *@s: the pointer to the string to be printed
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
