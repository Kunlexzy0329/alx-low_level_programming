#include <stdio.h>
#include <unistd.h>
/**
 *main-print the string of the write function
 *
 * Return:1 if (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
