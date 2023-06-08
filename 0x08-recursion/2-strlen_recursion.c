#include "main.h"
/**
 *_strlen_recursion - function that print lenth of string
 *@s: pointer to the string address
 *Return: 0 always
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
