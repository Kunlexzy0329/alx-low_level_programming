#include "dog.h"
#include <stdio.h>
/**
*init_dog -function to Create a Dog profile
*@x: name of the struct
*@name: Name of Dog.
*@age: Age of Dog.
*@owner: owner of Dog.
* Return: Always 0 if successful
*/
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
	else
		return;
}
