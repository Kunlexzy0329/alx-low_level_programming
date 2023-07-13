#include "main.h"

/**
 *array_range - function that create an array of integers
 *@min: the minimum value
 *@max: the maximum value
 *Return: ptr to the main
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}
