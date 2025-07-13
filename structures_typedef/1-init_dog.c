#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog- initialise the variable of type struct dog
 *
 * @d: pointer to the struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner's name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
