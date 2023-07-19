#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes - funtion that print the opcodes of this program
* @a: pointer to the address of the main function
* @n: number of bytes to print
* Return: void
*/

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
* main -it  prints the opcodes of its own main function
* @argc:arguments counter
* @argv:arguments vector
*Return: always O
*/

int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, a);
	return (0);
}
