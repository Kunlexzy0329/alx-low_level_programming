#include "main.h"
/**
 * _islower-function to print the lowercase of the character c
 * @c: parameter to be printed
 * return 1 if the parameter is in lower case
 * and return 0 if otherwise
 * Return: 0 always
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
