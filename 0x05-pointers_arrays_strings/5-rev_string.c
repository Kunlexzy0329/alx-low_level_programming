#include "main.h"
/**
 * rev_string - function that reverse string
 * @s: string that is reverse
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int j = 0;

	while (s[j] != '\0')
	j++;
	for (i = 0; i < j; i++)
	{
		j--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}

