#include "main.h"

/**
 * _strdup - function that return a duplicate
 *@str: string to duplicate
 *Return: duplicate
 */

char *_strdup(char *str)
{
	int len, x;
	char *ptr;
	int size;
	int y = 0;

		if (str == NULL)
			return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		len++;
	}
	size = len;
	ptr = malloc(sizeof(*str) * size);

	for (; y < size; )
	{
		if (ptr == NULL)
			return (NULL);
		ptr[y] = str[y];
		y++;
	}
	return (ptr);
}
