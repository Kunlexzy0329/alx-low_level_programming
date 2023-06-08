#include "main.h"
/**
 *_print_rev_recursion - funtion that print the reverse of strings
 *@s: pointer to the string
 * Return: 0 always
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
