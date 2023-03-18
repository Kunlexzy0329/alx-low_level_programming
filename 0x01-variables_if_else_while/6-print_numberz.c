#include <stdio.h>
/**
 * main-print numbers using putchar
 *
 * Return:0
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
