#include "main.h"
/**
 * _strchr - funtion that search a string
 * @s: the pointer to the string
 * @c: the character to search for
 * Return: s if found or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (*s == c)
		{
			return (s);
		}
	return (NULL);	
}
