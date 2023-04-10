#include "main.h"
/**
 * main- start point
 * @argc: counter
 * @argv: string
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
