#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key that we are searching for
 *
 * Return: the value associated with the key, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0'))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	/*look inside the bucket at index 'x'*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (strdup(node->value));
		node = node->next;
	}
	return (NULL);
}
