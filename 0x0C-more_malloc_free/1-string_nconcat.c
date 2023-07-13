#include "main.h"

/**
 *string_nconcat- function that concate two strings
 *@s1: first string
 *@s2: second string
 *@n: size of the string
 *Return: concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat = NULL;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";
	for (; s1[len1] != '\0';)
		len1++;
	for (; s2[len2] != '\0';)
		len2++;
	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0 ; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}
