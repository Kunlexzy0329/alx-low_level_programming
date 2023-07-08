#include "main.h"

/**
 *is_digit - function that return digit
 *@c: the string
 *Return: digit to the main
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 *is_positive_num- function that check if what was input is a digit
 *@s: what is inputed value
 *Return: 0 if error and 1 is true is succesful
 */
int is_positive_num(char *s)
{
	while (*s != '\0')
	{
		if (!is_digit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 *main - start program
 *@argc: argument counter
 *@argv: argument vectour
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
