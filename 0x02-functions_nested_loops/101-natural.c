#include <stdio.h>
/**
 * main - function to print the sum of the multiple of 3 or 5
 *
 * Return: 0 always
 */

int main(void)
{
	int j;
	int sum = 0;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
			sum = sum + j;
	}

	printf("%d\n", sum);

	return (0);
}
