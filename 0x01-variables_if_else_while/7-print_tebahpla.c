#include <stdio.h>
/**
 * main- print alphabet in reverse order
 *
 * Return:0
 */

int main(void)
{
	char i;

	for (i = 122; i > 97; --i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
