#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_dlistint- prints all the elements of dlistint
*
* @h: pointer to head node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n); /*prints data in the current node*/
		current = current->next; /*move pointer to the next node*/
		count++;
	}
	return (count);
}
