#include "main.h"

/**
 *create_array - function that create an array
 *@size: the array size
 *@c: the character
 *Return: array to the main
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
	free(ar);
}
