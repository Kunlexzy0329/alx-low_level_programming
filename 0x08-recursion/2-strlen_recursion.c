#include "main.h"

/**
 *_strlen_recursion - function that returns the length of string
 *@s: string
 *Return: the funcion to the main function
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
