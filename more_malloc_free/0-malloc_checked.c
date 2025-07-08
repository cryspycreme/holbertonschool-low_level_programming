#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- allocated memory using malloc
 *
 * @b: the size of memory to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NULL)
	{
		free(alloc);
		exit(98);
	}
	return (alloc);
}
