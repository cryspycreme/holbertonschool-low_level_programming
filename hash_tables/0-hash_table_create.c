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

	hash_t = malloc(sizeof(hash_t) * size);
	if (hash_t == NULL | size <= 0)
		return (NULL);

	return (hash_t);
}
