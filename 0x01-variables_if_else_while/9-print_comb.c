#include <stdio.h>
/**
 * main- start point 
 *
 * Return:0 if successful
 */

int main()
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar((a % 10) + '0');
			putchar(',');
			putchar((b % 10) + '0');
		}
	}
	putchar('\n');
	return (0);
}
