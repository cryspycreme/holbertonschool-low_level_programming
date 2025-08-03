#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index- deletes a node at a given position
*
* @head: pointer to a pointer that stores the address of the first node
* @index: index of list where node should be deleted. starts at 0
*
* Return: 1 if successful, -1 if unsuccessful.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	/*CHECK 1: if the list is empty*/
	if (*head == NULL)
		return (-1);

	/*traverse to the node at the given position*/
	while (count < index)
	{
		current = current->next;
		count++;
	}

	/*CHECK 2: if node is out of range*/
	if (current == NULL)
		return (-1);

	/*update previous node's next pointer*/
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}

	/*update next node's previous pointer*/
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	/*CHECK 3: if the node to be deleted is the head node*/
	if (*head == current)
	{
		*head = current->next;
	}

	/*deallocate memory for deleted node*/
	free(current);
	return (1);
}
