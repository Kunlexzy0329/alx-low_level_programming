#include "main.h"

/**
 * str_concat - function that concatenate two string
 * @s1: first string
 * @s2: second string
 * Return: ptr to the main
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2, n;
	char *ptr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	ptr = malloc(((len1 + len2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < len1; n++)
		ptr[n] = s1[n];
	for (n = 0; n < len2; n++)
		ptr[len1 + n] = s2[n];
	ptr[len1 + len2] = '\0';
	return (ptr);
}
