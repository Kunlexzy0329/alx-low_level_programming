#include "main.h"
/**
 * jack_bauer - fuction that print every minute of the day
 * i & j: parameters to be consider
 *
 * return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 59; i++)
	{
		for (j = 0; j <= 23; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
