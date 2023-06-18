#include "main.h"
/**
 *str_concat - function that concate
 *@s1: first string
 *@s2: second string
 *Return: conc to the main function
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i, j;
	char *conc;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (len1 = 0; s1[len1] != '\0'; )
		len1++;
	for (len2 = 0; s2[len2] != '\0'; )
		len2++;
	j = len1 + len2;
	conc = malloc(sizeof(char) * (j + 1));

	if (conc == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		conc[i] = s1[i];
	for (i = 0; i < len2; i++)
		conc[len1 + i] = s2[i];
	conc[len1 + len2] = '\0';
	return (conc);
}
