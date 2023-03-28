#include "main.h"
/**
 * print_rev - function that print string in reverse
 * @s: the string to print
 *Return: void.
 */

void print_rev(char *s)
{
	int rev = 0;

	for (; s[rev] != '\0';)
	{
		rev++;
	}
	for (rev -= 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
