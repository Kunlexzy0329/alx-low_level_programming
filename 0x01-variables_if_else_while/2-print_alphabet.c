#include <stdio.h>
/**
 *main- print out the character
 *
 *Return:0 always
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

