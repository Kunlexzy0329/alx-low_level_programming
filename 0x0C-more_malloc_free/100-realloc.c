#include "main.h"

/**
 *_memcpy - the function that copy the memory
 *@dest: the destination
 *@src: the source
 *@n: the size
 *Return: the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

/**
 *_realloc - function to reallocate a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated with a call to malloc
 *							malloc(old_size)
 *@old_size: the size in byte of the allocated space for ptr
 *@new_size: new size in byte of the new memry block
 *Return: new_ptr to the main
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new_ptr);

	new_ptr = _memcpy(new_ptr, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (new_ptr);
}
