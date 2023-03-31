#include "main.h"
/**
 * reverse_array - function that reverse an array
 * @a: pointer to the integer of the array
 * @n: array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (j = n - 1, i = 0; j > i; j--)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		i++;
	}
}
