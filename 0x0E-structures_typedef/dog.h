#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - define a new struct
 *
 * @name: Name of dog
 * @age: Age of Dog
 * @owner: Owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
