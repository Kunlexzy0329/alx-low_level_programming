#include "main.h"
/**
 * _isalpha- function that print if parameter is lowercase or uppercase
 * @c: parameter to be printed
 * return 1 if the parameter is lowecase or uppercase
 * and return 0 if otherwise
 * Return:0 always
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
