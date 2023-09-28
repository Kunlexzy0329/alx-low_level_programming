#include "main.h"

/**
* binary_to_uint - Converts a b number to an unsigned int.
* @b: Binary string to convert.
*
* Return: The converted unsigned int, or 0 if an error occurs.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = 0;
	int binary_factor = 1;

	if (!b)
		return (0);
	while (b[length] != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] == '1')
		{
			result += binary_factor;
		}
		binary_factor *= 2;
		length--;
	}
	return (result);
}
