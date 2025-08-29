#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table you want to print
 *
 * Return: nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first;
	hash_node_t *node;

	if (ht == NULL)
		printf("{}");

	printf("{");

	i = 0;
	first = 1;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first != 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			first = 0;
		}
		i++;
	}
	printf("}\n");
}
