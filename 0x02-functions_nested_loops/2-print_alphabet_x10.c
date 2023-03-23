#include "main.h"
/**
 * print_alphabet_x10- printing alphabet in ten lines
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	int alpha;
	int line;

	for (line = 0; line < 10; line++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
