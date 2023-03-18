#include <stdio.h>
/**
 * main- start point
 * putchar function translate num to ascii 
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	for(i=97; i<=122; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}

