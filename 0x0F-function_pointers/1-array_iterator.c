#include "function_pointers.h"

/**
 *array_iterator - function to execute a function given as parameter
 *@size: size of the array
 *@array: pointer to the array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
