#include "main.h"

/**
 *_print_rev_recursion - function to reverse a string
 * @s: thr string to reverse
 * Return void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
