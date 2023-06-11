#include "main.h"
/**
 * _isupper - fuction that check for uppercase character
 * @c : parameter to be checked
 * Return: 1 if it is uppercase and
 * return: 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
