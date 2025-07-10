#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog- prints the struct dog
 *
 * @d: pointer to the structure dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	if (d->age == 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	if (d->owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: (nil)", d->name, d->age);

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
