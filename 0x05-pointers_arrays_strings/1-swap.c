#include "main.h"
/**
 * swap_int - function that swaos the value of two integers
 *
 * @a: first value to be swap
 * @b: second value to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	 int i;

	 i = *a;
	 *a = *b;
	 *b = i;
}
