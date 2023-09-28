#include "main.h"

/**
 *set_bit - funcrion to set the value of a bit to 1 a ta a given index
 *@n: number of bit
 *@index: is the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = (*n | mask);
	return (1);
}
