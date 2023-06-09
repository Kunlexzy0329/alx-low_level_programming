#include "main.h"
#include <string.h>
/**
 *is_palindrome_searcher- help in searching for palindrome
 *@s: pointer to the search number
 *@b: begginning
 *@e: end of the number
 *Return: value to the main
 */
int is_palindrome_searcher(char *s, int b, int e)
{
	if (b >= e)
		return (1);
	if (s[b] != s[e])
		return (0);
	return (is_palindrome_searcher(s, b + 1, e - 1));
}

/**
 *is_palindrome- function that print the palindrome
 *@s : pointer to the number seached
 *Return: 0 always
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen(s);
	return (is_palindrome_searcher(s, 0, l - 1));
}
