#include "main.h"
/**
 * cap_string - function that capitalize all first letter
 * @str: string to capitalize
 * Return: str to the main
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' '
			|| str[i] == '\t'
			|| str[i] == '\n'
			|| str[i] == '.'
			|| str[i] == ','
			|| str[i] == '!'
			|| str[i] == '?'
			|| str[i] == '"'
			|| str[i] == '('
			|| str[i] == ')'
			|| str[i] == '{'
			|| str[i] == '}')
		{
			i++;
			if (str[i] >= 'A' && str[i] <= 'Z')
				i++;
			else if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i--;
		}
		else if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
	}
	return (str);
}
