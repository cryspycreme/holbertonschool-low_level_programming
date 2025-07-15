#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator- executes a function on each element of array
 *
 * @array: pointer to an array
 * @size: size of the array
 * @action: function pointer to the action to be applied.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

