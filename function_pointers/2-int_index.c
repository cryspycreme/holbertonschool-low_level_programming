#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index- searches for an integer
 *
 * @array: pointer to an array of integers
 * @size: no. of elements in array
 * @cmp: pointer to function to compare values
 * Return: index of first element where cmp does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp == 0)
		return (-1);

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				break;
			}
			i++;
		}
	}
return (i);
}
