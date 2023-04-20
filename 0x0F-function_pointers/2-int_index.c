#include "function_pointers.h"
/**
 *int_index - function to search for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: function pointer
 * Return: integer values tothe main
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
