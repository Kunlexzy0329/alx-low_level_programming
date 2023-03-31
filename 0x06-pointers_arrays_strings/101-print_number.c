#include "main.h"
/**
 * print_number - function to print integers
 * @n: integer to be printed
 * Return: void to th main
 */

void print_number(int n)
{
	unsigned int i, j;
	unsigned int count, temp, pow;

	i = n;
	pow = j = 1;

	if (n < 0)
	{
		i = i * -1;
		_putchar('-');
	}
	temp = i;

	while (temp > 9)
	{
		j++;
		temp = temp / 10;
	}
	for (count = 1; count < j; count++)
		pow = pow / 10;
	while (pow > 1)
	{
		_putchar((i / pow) % 10 + '0');
		pow = pow / 10;
	}
	_putchar(i % 10 + '0');
}
