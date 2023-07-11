#include "main.h"

/**
 *_strdup- function that allocate space for the string
 *@str: the string
 *Return: duplicate to the main fujnction
 */

char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
