#include "main.h"

/**
 *flip_bits- function that returns the num of bits you we need
 *			to flip to get from one num to another
 *@n: the numbers
 *@m: the other number
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int Nbits = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			Nbits++;
		n >>= 1;
		m >>= 1;
	}
	return (Nbits);
}
