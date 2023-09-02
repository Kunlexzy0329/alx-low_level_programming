#include "main.h"

/**
 * binary_to_uint- the function to convert a binary number to unsigned int
 *
 *@b: the pointer to the character
 *Return: res always
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int idx = 0;

	if (b == NULL)
		return (0);
	while (b[idx] != '\0')
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
		res = (res << 1) + (b[idx] - '0');
		idx++;
	}
	return (res);
}
