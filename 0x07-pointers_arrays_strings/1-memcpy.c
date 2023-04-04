#include "main.h"
/**
 * _memcpy - function that copy memory area
 * @dest: destination string
 * @src: source string
 * @n: size of the array
 * Return: 0 always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; src[count] != '\0', count < n; count++)
		dest[count] = src[count];
	return (dest);
	dest[count] = '\0';
}
