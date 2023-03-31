#include "main.h"
/**
 * _strncpy - function that copy two strings
 * @dest: destinatin pointer
 * @src: source pointer
 * @n: size of the array
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; i < n && src[i] != '\0'; i++)
		;
	for (; j < i && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
