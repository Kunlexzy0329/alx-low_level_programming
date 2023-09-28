#include "main.h"

/**
 *get_bit - function to return the value of a bit at a given index
 *@index: is the index
 *@n: the number
 *
 * Return: value of bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	if (n == 0 && index < 64)
		return (0);
	while (count <= 63)
	{
		if (index == count)
			return (n & 1);
		n >>= 1;
		count++;
	}
	return (-1);
}
