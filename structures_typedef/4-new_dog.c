#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog- creates a new dog
 *
 * @name: pointer to a copied location of the name
 * @age: age of dog
 * @owner: pointer to a copied location of the owner's name
 * Return: pointer to new_dog structure, or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, name_len = 0, own_len = 0;

	dog_t *new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
			return (NULL);

	while (name[name_len] != '\0')
		name_len++;
	new_dog->name = malloc(sizeof(char) * name_len + 1);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}

	while (i < name_len)
	{
		new_dog->name[i] = name[i];
		i++;
	}

	new_dog->age = age;

	while (owner[own_len] != '\0')
		own_len++;

	new_dog->owner = malloc(sizeof(char) * own_len + 1);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}

	while (j < own_len)
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
return (new_dog);
}
