#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list- return the no. of nodes it prints
*
* h: pointer to the first node in the list
* Return: no. of nodes printed
*/

size_t list_len(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                h = h->next;
                count++;
        }
        return (count);
}
