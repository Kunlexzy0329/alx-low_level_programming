#include "main.h"
/**
 * main- the start point
 *
 * Return: 0 if successful
 */

int main(void)
{
	char *name = "_putchar";

	for (; *name; name++)
	{
		_putchar(*name);
	}
	_putchar('\n');
	return (0);
}
