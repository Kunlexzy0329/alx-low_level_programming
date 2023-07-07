#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the string
 * @b: the byte to fill the memory with
 * @n: the size of the array
 * Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
