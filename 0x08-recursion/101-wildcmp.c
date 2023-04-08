#include "main.h"
/**
 * wildcmp - function that compare two string
 * @s1: first string
 * @s2: second string
 * Return:0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		else if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
