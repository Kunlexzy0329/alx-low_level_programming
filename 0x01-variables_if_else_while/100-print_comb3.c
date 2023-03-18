#include <stdio.h>
/**
 * main- start point
 * putchar to print the output in combination ot two digit
 * if statement is used to control the loop
 * Return:0 always
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if ((a == 8) && (b == 9))
			{
				continue;
			}
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
