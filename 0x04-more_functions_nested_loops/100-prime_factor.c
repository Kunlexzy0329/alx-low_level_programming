#include "main.h"
#include <stdio.h>

/**
* main - find and print largest prime factor of a number
*Return: Always 0 (Success)
*/
int main(void)
{
	long int i;
	long int number;

	i = 2;
	number = 612852475143;
	while (i < (number / 2))
	{
		if ((number % i) == 0)
		{
			number = number / i;
			i = 2;
		}
		else
			i++;
	}
	printf("%ld\n", number);
	return (0);
}
