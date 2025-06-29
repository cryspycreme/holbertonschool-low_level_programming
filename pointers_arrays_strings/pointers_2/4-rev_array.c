#include <stdio.h>
#include "main.h"

/**
 * reverse_array- reverse the content of an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

    /*store reverse array in a variable*/
	i = 0;

	while (i < n / 2)
	{
		h = a[i];/*copy original value into variable */
		a[i] = a[n - 1 - i];/*updates the array variable a to the reverse b*/
		a[n - 1 - i] = h;/*updates element b to element a*/
		i++;
	}
}
