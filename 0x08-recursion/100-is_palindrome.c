#include "main.h"
/**
 *is_palindrome - function that return a palindrome string
 *@s: the string
 *Return: 1 if it is palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s == NULL)
		return (1);
	else if (s[i] != '\0')
	{
		is_palindrome(s + 1);
		return (0);
	}
	}
}
