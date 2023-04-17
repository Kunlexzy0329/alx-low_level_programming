#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_dog- funtion that print
 * @d: pointer to the struct members
 * Return: nothing
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nill)");
}
