#include "main.h"
/**
 * print_array - function that prints elements of an array
 * @a: pointer to the array
 * @n: size of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count != n - 1)
		{
			printf("%d", *(a + count));
			printf(",");
			printf(" ");
		}
		else
			printf("%d", *(a + count));
	}
	printf("\n");
}
