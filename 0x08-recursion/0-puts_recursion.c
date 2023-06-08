#include "main.h"
/**
 *_puts_recursion - function that print string
 *@s:the pointer to the string
 *Return: 0 always
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
