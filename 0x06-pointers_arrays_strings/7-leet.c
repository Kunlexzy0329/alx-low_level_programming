#include "main.h"
/**
 * leet - function that replace an alphabet with number
 * @str: string to be replace
 * Return: str to the main
 */

char *leet(char *str)
{
	int i;
	int j;
	char *alph = "aeotlAEOTL";
	char *integer = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if (str[i] == alph[j])
				str[i] = integer[j];
		}
	}
	return (str);
}
