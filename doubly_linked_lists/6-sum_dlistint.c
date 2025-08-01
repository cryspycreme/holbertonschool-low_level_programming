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

	while (current->next != NULL)
	{
		if (current == NULL)
		{
			return (0);
		}
		sum = sum + current->n;
		current = current->next;
	}
	sum = sum + current->n;
	return (sum);
}
