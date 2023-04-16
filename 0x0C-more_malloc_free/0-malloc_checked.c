#include "main.h"

/**
 * malloc_checked - to allocate memory
 * @b: size of the memory
 * Return: void
 *
 */

void *malloc_checked(unsigned int b)
{
	int *space;

	space =(int*)malloc(sizeof(*space) * b);
	if (space == NULL)
	{
		exit(98);
	}
	return (space);
}
