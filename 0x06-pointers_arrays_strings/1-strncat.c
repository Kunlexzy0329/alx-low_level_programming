#include "main.h"
/**
 * _strncat - function that cantanate 
 * @dest: destination
 * @src: source from which it is copied from
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for(j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	return (dest);
}
