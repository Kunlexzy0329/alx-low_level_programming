#include "main.h"

/**
 *get_bit - function to return the value of a bit ata given index
 *
 *@n: the number
 *@index: the index number
 *Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return (n >> index) & 1;
	else
		return (-1);
}
