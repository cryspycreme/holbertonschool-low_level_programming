#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node to a singly linked list
* @head: pointer to a pointer to the head of linked list
* @str: string to be copied
*
* Return: a pointer to the new node added (ie. list_t strcut)
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i = 0;

	new_node->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	free(new_node);
}
