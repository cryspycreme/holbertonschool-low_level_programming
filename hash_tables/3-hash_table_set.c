#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table struct
 * @key: the key that is not empty
 * @value: value associated with key
 *
 * Return: 1 if succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *node;

	/*determine index of key*/
	index = key_index((const unsigned char *)key, ht->size);

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0') || (value == NULL))
		return (0);

	node = ht->array[index];

	while (node != NULL)
	{
		if (node->key == key)
		{
			free(node->value);
			node->value = strdup(value); /*duplicate value*/
		}
		else
		{
			new_node = malloc(sizeof(hash_node_t)); /*allocate mem for new node*/
			if (new_node == NULL)
				return (0);

			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = node; /*insert at beginning*/
			node = new_node; /*new_node becomes head of linked list*/
		}
	}
	return (1);
}
