#include "main.h"

/**
 *get_endianness- the function that check the endianness
 *
 *Return: 0 if big endian, 1 if little endian
 *
 */

int get_endianness(void)
{
	unsigned int y = 1;

	return (*((char *)&y) == 1);
}
