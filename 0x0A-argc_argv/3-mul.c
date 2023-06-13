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

	if (argc > 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
		printf("Error\n");
	return (0);
}
