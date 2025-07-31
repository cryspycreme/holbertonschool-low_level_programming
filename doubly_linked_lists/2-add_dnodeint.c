#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint- adds new node at beginning of linked list
* 
* @head: pointer to a pointer
* Return: address of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	
	/*allocate memory for new node*/
	new_node = malloc(sizeof(dlistint_t));
	
	/*check if malloc successful*/
	if (new_node == NULL)
		return (NULL);
		
	/*initialise new node*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	
	/*check if list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	
	/*update link from old head to new node*/
	(*head)->prev = new_node;

	/*reinitialise head to new node*/
	*head = new_node;

	return (new_node);
}
