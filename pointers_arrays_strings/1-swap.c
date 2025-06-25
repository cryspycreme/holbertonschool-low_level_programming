#include "main.h"
#include <stdio.h>

/**
*
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
