#include "main.h"
/**
 * _strspn - function that gets length of a prefix
 * @s: string 1
 * @accept: string 2
 * Return: 0 always
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
			if (accept[j] == '\0')
				return (i);
	}
	return (i);
}
