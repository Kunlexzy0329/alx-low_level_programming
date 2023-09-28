#include "main.h"

/**
 *flip_bits- function that returns the number of bits wyou would need to flip
 * from one number
 *@n: number
 *@m: mask
 *
 * Return: number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
		n >>= 1;
		m >>= 1;
	}
	return (n_bits);
}
