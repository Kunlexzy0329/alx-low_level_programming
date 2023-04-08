#include "main.h"
/**
 *is_palindrome - function that return a palindrome string
 *@s: the string
 *Return: 1 if it is palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	is_palindrome(s + 1);
	return (0);
}
