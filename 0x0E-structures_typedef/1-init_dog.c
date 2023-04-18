#include<stdio.h>
#include "dog.h"

/**
 * init_dog - Dog stucture initialized
 * @d: The Dog structure
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

