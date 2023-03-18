#include <stdio.h>
/**
 * main- print alphabet in lowercase but ommit q and e
 *
 * Return:0 if true
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
}
