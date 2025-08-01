#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index- returns the nth node of a dlistint_t linked list.
* 
* @head: pointer to list
* @index: index of the node, starting from 0.
* Return: the nth node of a dlistint_t linked list.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;
	
	while (count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
