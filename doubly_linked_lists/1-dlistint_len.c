#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len- returns no. of elements in a linked list
*
* @h: pointer to head node
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
