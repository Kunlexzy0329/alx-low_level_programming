#include "main.h"

/**
 *main - start point
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}

	return (0);
}
