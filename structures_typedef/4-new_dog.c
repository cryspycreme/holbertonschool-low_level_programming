#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog: creates a new dog
 *
 * @name: pointer to a copied location of the name
 * @age: age of dog
 * @owner: pointer to a copied location of the owner's name
 * Return: pointer to new dog_t structure, or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i,n;
	
	new_dog = malloc(sizeof(dog_t);
		if (new_dog == NULL)
			return (NULL);
	
	/*find length of name*/
	n = 0;
	
	while (name[n] != '\0')
	{
		n++;
	}
	/*allocate and copy name*/
	new_dog->name = malloc(sizeof(char) * n))
		if (new_dog->name == NULL)
			free(new_dog);
			return (NULL);
	
	i = 0;
	while (i < n)
	{
		new_dog->name[i] = name[i];
	}


}
