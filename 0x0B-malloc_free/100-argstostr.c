#include "main.h"

/**
 *argstostr- the function that concatenate all the string
 *@ac: the array count
 *@av: pointer to the argument vector
 *Return: string to the command line
 */

char *argstostr(int ac, char **av)
{
	char *str;
	char *s;
	int i, j, k;
	int len = 0;

	if (!(ac && av))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';

	return (str);
}
