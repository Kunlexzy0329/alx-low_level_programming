#include "main.h"

/**
 * _calloc - function that allocate memory for an array using malloc
 *@nmemb: first array
 *@size: size of the array
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocate = NULL;
	unsigned int j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	allocate = malloc(size * nmemb);
	if (allocate == NULL)
		return (NULL);
	for (j = 0; j < nmemb * size; j++)
	{
		allocate[j] = 0;
	}
	return ((void *)allocate);
}
