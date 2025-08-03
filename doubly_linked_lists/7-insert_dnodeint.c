#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index- inserts a new node at a given position
*
* @h: pointer to a pointer that stores the address of the first node
* @idx: index of list where new node should be added. starts at 0
* @n: the number to be added to the inserted node.
*
* Return: address of the new node, or NULL if failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *node_prev = *h;
	unsigned int prev_count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0) /* CHECK 2 - if index = 0*/
	{
		node_prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
        	{
                	(*h)->prev = new_node;
                	*h = new_node;
			return (new_node);
        	}
	}

	while (prev_count < idx - 1)
	{
		node_prev = node_prev->next;
		prev_count++;
	}

	if (node_prev == NULL) /*index out of range*/
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = node_prev->next;
	new_node->prev = node_prev;
	node_prev->next = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
