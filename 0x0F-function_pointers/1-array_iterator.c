#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - function that prints name
* @array:pointer to the array array
* @size: size
* @action: function pointer action
*
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
