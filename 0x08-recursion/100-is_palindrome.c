#include "main.h"
/**
 *is_palindrome - function that return a palindrome string
 *@s: the string
 *Return: 1 if it is palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (s ==  NULL)
		return (0);
	else if (*s != '\0')
		return (is_palindrome(s + 1));
	return (1);
}
