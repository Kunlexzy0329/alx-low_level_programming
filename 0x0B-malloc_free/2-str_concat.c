#include "main.h"

/**
 *str_concat- function to concat two strings
 *@s1: the first string
 *@s2: the second string
 *Return: conc to the main function for printing
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *conc;
	int i;

	if (s1 == NULL)
		s1 = " ";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	if (s2 == NULL)
		s2 = " ";
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	conc = (char *)malloc(((len1 + len2) + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		conc[i] = s1[i];
	for (i = 0; i < len2; i++)
		conc[len1 + i] = s2[i];
	conc[len1 + len2] = '\0';
	return (conc);
}
