#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node to the end of a singly linked list
* @head: pointer to a pointer to the head of linked list
* @str: string to be printed.
*
* Return: the address of the new element, or NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;
	int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	};

	new_node->len = i;
	new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
	return (new_node);
}

current = *head;

/*traverse to the last node*/
while (current->next != NULL)
{
	current = current->next;
}

/*change the next pointer of the last node to the new node*/
current->next = new_node;
return (new_node);
}
