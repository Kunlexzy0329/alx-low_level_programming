#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- print the last digit of the number stored
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	if (n % 5 > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n % 5 == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6and not 0\n", n);
	}
	return (0);
}
