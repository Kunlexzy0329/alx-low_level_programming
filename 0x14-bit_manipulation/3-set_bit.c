#include "main.h"

/**
 *set_bit- function that set the value of a bit to 1 at a given index
 *@n: the pointer to the number
 *@index: the index starting from 0 of the bit to set
 *
 *Return: -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n |= (1UL << index);
		return (1);
	}
	return (-1);
}
