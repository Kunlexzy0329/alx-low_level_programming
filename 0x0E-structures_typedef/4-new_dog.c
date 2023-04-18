#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - function that copy string
 *@name: first parameter
 *@age: second parameter
 *@owner: third parameter
 *Return: the pointer to the string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ownerLen = 0;
	unsigned int nameLen = 0;
	int i;
	dog_t *new_dog_ptr;

	while (name[nameLen] != '\0')
		nameLen++;
	while (owner[ownerLen] != '\0')
		ownerLen++;
	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = malloc(nameLen + 1);
	if (new_dog_ptr == NULL)
		return (NULL);
	for (i = 0; i < nameLen; i++)
		new_dog_ptr->name[i] = name[i];

	new_dog_ptr->age = age;

	new_dog_ptr->owner = malloc(ownerLen + 1);
	if (new_dog_ptr->owner == NULL)
		return (NULL);
	for (i = 0; i < ownerLen; i++)
		new_dog_ptr->owner[i] = owner[i];
	return (new_dog_ptr);
}
