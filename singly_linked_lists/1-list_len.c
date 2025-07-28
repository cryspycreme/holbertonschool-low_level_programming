#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len- return the no. of elements in the list
*
* @h: pointer to the first node in the list
* Return: no. of nodes printed
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
