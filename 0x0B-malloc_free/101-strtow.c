#include "main.h"

/**
 * wordcount - counts the number of words in a string
 * @s: string to count
 *Return: integer of number of words
 */
int wordcount(char *s)
{
	int i, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;
	return (num);
}

/**
* strtow - splits a string into words
* @str: string to split
*Return: pointer to an array of strings
*/
char **strtow(char *str)
{
	int i, j, k, l, num = 0, wrdcnt = 0;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = wordcount(str);
	if (num == 1)
		return (NULL);
	word = (char **)malloc(num * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			word[wrdcnt] = (char *)malloc(j * sizeof(char));
			j--;
			if (word[wrdcnt] == NULL)
			{
				for (k = 0; k < wrdcnt; k++)
				free(word[k]);
				free(word[num - 1]);
				free(word);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				word[wrdcnt][l] = str[i + l];
			word[wrdcnt][l] = '\0';
			wrdcnt++;
			i += j;
		}
		else
			i++;
	}
	return (word);
}
