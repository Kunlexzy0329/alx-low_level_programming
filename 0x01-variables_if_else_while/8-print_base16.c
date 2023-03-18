#include <stdio.h>
/**
 * main- printing an hexadecimal
 *
 * Return:0 if successful
 */

int main(void)
{
	int i;
	char u;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	for (u = 'a'; u <= 'f'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
