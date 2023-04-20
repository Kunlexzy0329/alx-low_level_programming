#include "function_pointers.h"

/**
 * print_name - function that print name using function pointer
 *
 * @name: pointer to the string name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
