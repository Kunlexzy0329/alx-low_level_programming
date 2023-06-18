#include "main.h"
#include <string.h>

/**
 *_strdup - fuction for string duplication
 *@str: string
 *Return: duplicate to the main
 */

char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
