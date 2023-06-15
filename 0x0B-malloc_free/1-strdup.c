#include "main.h"
#include <string.h>

/**
 *_strdup - fuction for string duplication
 *@str: string
 *Return: duplicate to the main
 */

char *_strdup(char *str)
{
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	char *dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);
	return (dup);
}
