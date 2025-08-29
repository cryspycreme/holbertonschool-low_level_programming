#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index- returns the index of each key
 *
 * @key: the key
 * @size: size of the hash table
 * Return: index where the key-value pair is stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);

	return (index);
}
