#include <stdio.h>
/**
 * main- start point
 * putchar print the possible combination of three digit
 * if statement is used to control the assignment of the commer and space
 * Return:0 if successful
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if ((a % 10) == 7 && ((b % 10) == 8) && ((c % 10) == 9))
				{
					continue;
				}
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

