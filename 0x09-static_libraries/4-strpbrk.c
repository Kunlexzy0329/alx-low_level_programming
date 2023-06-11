#include "main.h"
/**
 * _strpbrk - function that search a string for a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a if first occurence is found and null if not found
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = s;

	while (*a != '\0')
	{
		char *t = accept;

		while (*t != '\0')
		{
			if (*a == *t)
			{
				return (a);
			}
			t++;
		}
		a++;
	}
	return (0);
}
