#include <stdio.h>
/**
 * main- start point
 * putchar to print double number
 * using nested loop to control the program
 * Return:0 if true
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

			if ((a % 10) == 8)
				{
					if ((b % 10) == 9)
					{
						continue;
					}
				}

			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
