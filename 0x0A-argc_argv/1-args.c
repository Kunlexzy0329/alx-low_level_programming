#include "main.h"
/**
 *main - start of the program
 *@argc: the argument count
 *@argv: argument vector
 *Return: 0 always
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
