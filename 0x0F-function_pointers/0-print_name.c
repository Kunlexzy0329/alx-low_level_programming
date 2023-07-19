#include "function_pointers.h"

/**
 *print_name - function that print name of a string
 *@name: name of the string
 *@f: function pointer
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	(*f)(name);
}
