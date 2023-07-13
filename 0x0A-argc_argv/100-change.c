#include "main.h"

/**
* main - start program
* @argc: argument counter.
* @argv: Character of arrays.
* Return: 0 for success or 1 for error.
*/
int main(int argc, char *argv[])
{
	int j;
	unsigned int cents[5] = {25, 10, 5, 2, 1};
	unsigned int n = 0;
	unsigned int num_cents[5] = {0};
	unsigned int r = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	for (j = 0; j <= 4; j++)
	{
		num_cents[j] = n / cents[j];
		n = n % cents[j];
	}
	r = num_cents[0] + num_cents[1] + num_cents[2] + num_cents[3] + num_cents[4];
	printf("%d\n", r);
	return (0);
}
