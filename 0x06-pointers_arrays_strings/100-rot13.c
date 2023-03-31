#include "main.h"
/**
 * rot13 - function to covert to rot13
 * @str: string to be converted
 * Return: str
 */

char *rot13(char *str)
{
	char *luAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *luMix = "NOPQRSTUVWXYZaABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; luAlpha[j] != '\0'; j++)
		{
			if (str[i] == luAlpha[j])
			{
				str[i] = luMix[j];
				break;
			}
		}
	}
	return (str);
}
