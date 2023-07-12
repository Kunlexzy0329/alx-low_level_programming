#include "main.h"

/**
 * palindrome - Function to compare string.
 *
 * @i: counter to begin string.
 * @len: lenght of the string.
 * @s: String to evaluate.
 *
 * Return: 1 for palindrome . 0 for not palindrome.
 *
 */
int palindrome(int i, int len, char *s)
{
	if (i == len - 1)
		return (1);
	else if (s[i] != s[len - 1])
		return (0);
	else if (i < len - 1)
		return (palindrome(i + 1, len - 1, s));
	return (1);
}
/**
 * len - Function for calculate lenght of the string.
 *
 * @s: String to evaluate.
 *
 * Return: lenght of the string.
 *
 */
int len(char *s)
{
	if (*s != '\0')
		return (1 + len(s + 1));
	return (0);
}
/**
 * is_palindrome - Function to evaluate is a palindrome.
 *
 * @s: String to evaluate is a palindrome word.
 *
 * Return: 1 for palindrome . 0 for not palindrome.
 *
 */
int is_palindrome(char *s)
{
	int length = len(s);

	return (palindrome(0, length, s));
}
