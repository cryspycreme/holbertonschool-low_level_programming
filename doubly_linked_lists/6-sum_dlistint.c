#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint- returns the sum of all the data (n) of the linked list.
*
* @head: pointer to list
*
* Return: sum of data in each node.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
