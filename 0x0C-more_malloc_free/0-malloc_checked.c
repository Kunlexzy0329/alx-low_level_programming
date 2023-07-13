#include "main.h"

/**
 *malloc_checked- function that allocate memory using malloc
 *
 *@b: the size
 *Return: check
 */

void *malloc_checked(unsigned int b)
{
	void *check = NULL;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
