#include "function_pointers.h"

/**
* int_index - fumction that searched for an integer.
* @array: array searched.
* @size: size of array.
* @cmp: function pointer
* Return: -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (array && size > 0 && cmp)
	{
		j = 0;
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
