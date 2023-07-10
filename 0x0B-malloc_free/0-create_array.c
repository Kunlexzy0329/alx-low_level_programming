#include "main.h"

/**
 *create_array- function that allocate memory
 *@size : the size of the array
 *@c: the special character initialize
 *Return: ptr to the main function
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		ptr[size] = '\0';
	}
	return (ptr);
}
