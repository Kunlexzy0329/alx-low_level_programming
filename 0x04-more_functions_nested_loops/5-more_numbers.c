#include "main.h"
/**
 * more_numbers - function that prints 10 times the number
 * from 0 to 14
 * Return : void
 */

void more_numbers(void)
{
	int num;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
