#include <stdio.h>
/**
 * main-start point 
 *
 * Return:0 if successful
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; ++a)
	{
		putchar((a % 10) + '0');
		if ((a % 10) ==9)
		{
			continue;
		}
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
