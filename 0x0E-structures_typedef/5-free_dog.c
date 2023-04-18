#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - function that free the memory allocated
 *
 *@d: the pointer to the space allocated
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
