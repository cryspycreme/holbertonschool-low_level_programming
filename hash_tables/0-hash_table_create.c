#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates an empty hash table
 *
 * @size: the size of the array
 * Return: pointer to the hash table, NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	hash_node_t *node_ptr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	/*set the size field of struct*/
	hash_t->size = size;

	/*allocate memory for the array of bucket pointers*/
	hash_t->array = malloc(sizeof(node_ptr) * size);
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		hash_t->array[i] = NULL;
		i++;
	}

	return (hash_t);
}
