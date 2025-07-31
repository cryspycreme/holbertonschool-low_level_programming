#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint- frees linked list
* 
* @head: pointer to list
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
