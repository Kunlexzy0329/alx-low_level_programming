#include "main.h"
/**
 * print_diagsums - function that print sum of diagonal
 * @a: the pointer to the string
 * @size: array size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	if ((sum1 != *(a + i * size + i) - 1))
	{
		printf("%d,\t", sum1);
	}
	else
	{
		printf("%d\t", sum1);
	}
	printf("%d\n", sum2);
}
