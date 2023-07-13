#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *multiply - the function for multiplication
 *@num1: first number
 *@num2: second number
 *Return: multiple of n1 and n2
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 *validate_input - function to validate the input
 *@str: pointer to the string
 *Return: 0 if error and 1 if successful
 */

int validate_input(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 *main- the start of the program
 *@argc: the argument counter
 *@argv: the argument vector
 *Return: 98 if error and 1 if successful
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!validate_input(argv[1]) || !validate_input(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
