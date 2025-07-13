#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog- frees memory allocated for dog struct
 *
 * @d: pointer to a dog_t struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
