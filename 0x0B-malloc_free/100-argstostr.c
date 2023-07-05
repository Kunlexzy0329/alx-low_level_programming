#include "main.h"

/**
 *argstostr - function that calculate the lengthof the string
 *@ac:argument counter
 *@av: pointer to the string argument vector
 *Return: result to the main function
 */

char *argstostr(int ac, char **av)
{
	int i, j, idx;
	int total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	result = malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	idx = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[idx] = av[i][j];
			idx++;
			j++;
		}
		result[idx] = '\n';
		idx++;
	}
	result[total_length] = '\0';
	return (result);
}
