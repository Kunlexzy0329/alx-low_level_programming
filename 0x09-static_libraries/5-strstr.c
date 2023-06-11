#include "main.h"
/**
 * _strstr - function that locate a subscript
 * @haystack: pointer first string
 * @needle: pointer to the second string
 * Return: haystack if found or null if otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
