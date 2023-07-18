#include "dog.h"
#include <stdlib.h>

/**
 *_strdup- function to copy string
 *@str: the string
 *Return: copy of the string
 */
char *_strdup(char *str)
{
	unsigned int k = 0;
	unsigned int i;
	char *ptr;

	if (*str == '\0')
	{
		return ('\0');
	}
	while (str[k] != '\0')
	{
		k++;
	}
	ptr = malloc(sizeof(char) * (k + 1));
	if (ptr != NULL)
	{
		for (i = 0; i <= k; i++)
		{
			ptr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}

/**
 *new_dog- new dog function
 *@name: name of the dog
 *@age: the new age
 *@owner: owners name
 *Return: new dog datas
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new->name);
		return (NULL);
	}
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	new->age = age;
	return (new);
}
