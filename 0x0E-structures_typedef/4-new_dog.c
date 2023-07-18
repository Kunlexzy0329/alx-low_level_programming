#include "dog.h"
#include <stdlib.h>

/**
 *string_len- length of the string function
 *@str: the string
 *Return: string length
 */
int string_len(const  char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 *copy_str - copy string function
 *@dest: destination
 *@src: source
 *Return: void
 */
void copy_str(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
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
	int n_len, o_len;
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	n_len = string_len(name);
	o_len = string_len(owner);
	new_dog->name = (char *)malloc(n_len + 1);
	new_dog->owner = (char *)malloc(o_len + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	copy_str(new_dog->name, name);
	copy_str(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
