#include "main.h"

/**
 *main - start of the program
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
	for (i = 1; i < argc;  i++)
	{
		if (!(*argv[i] == '0') && !(*argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
