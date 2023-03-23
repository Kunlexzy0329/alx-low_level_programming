#include <unistd.h>
/**
 * putchar to c out the compiled result
 *
 * return:1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
			
