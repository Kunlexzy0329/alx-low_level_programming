#include "main.h"
/**
 * main - start point
 * @argc: counter
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int x, y;
	int mult;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mult = x * y;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
