#include "main.h"
/**
 * set_string - function that set the value of a pointer to char
 * @s: pointer to a pointer
 * @to: pointer set to another pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
