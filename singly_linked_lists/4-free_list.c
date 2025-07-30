#include <stdlib.h>
#include "lists.h"

/**
 * free_list- frees memory allocated for list_t list
 *
 * @head: pointer to head
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
