#include "main.h"
/**
 *
 *
 *
 */

void puts_half(char *str)
{
	int n;
	int length = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
		length++;
	}
		if (length % 2 == 0)
		{
			for (n = length / 2; str[n] != '\0'; n++)
				{
					_putchar(str[n]);
				}
			_putchar('\n');
		}
		else if (length % 2 != 0)
		{
			for (n = (length - 1) / 2; str[n] != '\0'; n++)
			{
				_putchar(str[n]);
			}
			_putchar('\n');
		}
}
