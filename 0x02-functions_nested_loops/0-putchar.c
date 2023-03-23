#include "main.h"
/**
 *main- start point 
 *
 * Return:0 always
 */
int main(void)
{
	char *name = "_putchar";

	for (; *name ; name++)
	{
		_putchar(*name);
	}
	_putchar('\n');
	return (0);
}
