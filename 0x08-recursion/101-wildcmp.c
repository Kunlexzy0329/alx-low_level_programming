#include "main.h"

/**
 *wildcmp_compare- help to compare two string
 *@s:pointer first string
 *@s1:pointer to second string
 *Return: 0 always
 */

int wildcmp_compare(char *s, char *s1)
{
	if (*s == '\0' && *s1 == '\0')
		return (1);
	if (*s1 == '*')
	{
		if (wildcmp_compare(s, s1 + 1))
			return (1);
	}
	if (*s != '\0' && wildcmp_compare(s + 1, s1))
		return (1);
	if (*s == *s1)
	{
		return (wildcmp_compare(s + 1, s1 + 1));
	}
	return (0);
}

/**
 *wildcmp - function that return the values to main
 *@s1: pointer to first string
 *@s2: pointer to the second string
 *Return: 0 always
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_compare(s1, s2) ? 1 : 0);
}
