#include "dog.h"
#include <stdlib.h>
#include <string.h>
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

	while (name[nameLen] != '\0')
		nameLen++;
	while (owner[ownerLen] != '\0')
		ownerLen++;
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = malloc(nameLen + 1);
	new_dog_ptr->owner = malloc(ownerLen + 1);

	if (new_dog_ptr->name == NULL || new_dog_ptr == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	strcpy(new_dog_ptr->owner, owner);
	return (new_dog_ptr);
}
