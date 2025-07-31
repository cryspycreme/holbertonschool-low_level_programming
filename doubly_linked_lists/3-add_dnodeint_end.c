#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end- adds new node at end of linked list
*
* @head: pointer to a pointer
* @n: number to be added to new node.
* Return: address of new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	/* allocate memory for new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*set value of new node*/
	new_node->n = n;

	/*check if head is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;

	/*find position of last node*/
	while (last->next != NULL)
	{
		last = last->next;
	}

	/*set position of new node*/
	new_node->prev = last;
	new_node->next = NULL;

	/*point existing last node to new node*/
	last->next = new_node;

	return (new_node);
}
