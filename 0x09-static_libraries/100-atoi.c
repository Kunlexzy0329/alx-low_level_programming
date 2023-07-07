#include "main.h"
/**
 * _atoi - to convert a string into an integer.
 *
 *@s: the string to use.
 *Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1, j = 0;
	unsigned int k = 0;


	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[j] == '-')
			sign *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		k = (k * 10) + (s[j] - '0');
		j++;
	}
	k *= sign;
	return (k);
}
