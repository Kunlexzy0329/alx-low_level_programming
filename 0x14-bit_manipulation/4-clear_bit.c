#include "main.h"

/**
 *clear_bit - function that sets the value of a bit to 0 at a goiven index
 *@n: pointer to the number
 *@index: is the index
 *
 *Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	if (*n & mask)
		*n ^= mask;
	return (1);
}
