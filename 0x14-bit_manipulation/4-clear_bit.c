#include "main.h"

/**
 *clear_bit- function that sets the value of a bit to 0 at a given index
 *
 *@n: the number
 *@index: index starting from 0 of the bit
 *Return: 1 if it worked or _1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
