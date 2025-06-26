#include "main.h"
#include <stdio.h>

/**
* print_array- prints n elements of an array of integers
*
* @a: array
* @n: no. of elenets in the array to print
*/

void print_array(int *a, int n)
{
	int i; /*array index counter*/

	i = 0;

	while (i <= n - 1)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		else
		{
			printf("%d", a[i]);
			i++;
		}
	}
	printf("\n");
}
