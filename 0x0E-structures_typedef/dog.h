#ifndef DOG_H
#define DOG_H


#include <stdio.h>

/**
 *struct dog - variable type
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);



#endif
