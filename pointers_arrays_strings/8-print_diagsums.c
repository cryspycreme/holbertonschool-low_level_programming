#include "main.h"
#include <stdio.h>

/**
* print_diagsums-prints the sum of the two diagonals of a square matrix
*
* @a: pointer to a 2D array 
* @size: size of array
* Return: void
*/

void print_diagsums(int *a, int size)
{
    // int a = [3][3]
    // size = 3

    int i = 0;
    int sum1 = 0; /*first diagnoal*/
    int sum2 = 0; /*second diagonal*/

    while (i < size)
    {
        sum1 = (a[i * size + i]) + sum1;
        i++;
    }

    i = 0;

    while (i < size)
    {
        /*in a flattened array, we access the index in memory as [row * size + column]*/
        sum2 = (a[i * size + ((size - i - 1))]) + sum2;
        i++;
    }

    printf("%d, %d\n", sum1, sum2);
}
