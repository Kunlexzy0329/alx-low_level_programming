#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - function to free dog
 *@d: the pointer to the dog document created
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
