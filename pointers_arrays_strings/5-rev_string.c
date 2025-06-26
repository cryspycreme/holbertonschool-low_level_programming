#include <stdio.h>

/**
* rev_string- reverses a string
*
* @s: pointer to the string
* Return: void
*/

void rev_string(char *s)
{
    /*temp array to store elements in reverse order*/
    int temp[10];

    int i; /*loop counter*/

    /*Copy elements from original array to temp in reverse order*/
    for (i = 0; i < 10; i++)
    {
        temp[i] = s[10 - 2 - i];
        /* printf("%c", temp[i]);*/
    }

    /*Copy elements back to original array*/
    for (i = 0; i < 10; i++)
    {
        /* printf("%c", s[i]);*/
        /* printf(" ");*/
        /* printf("%c", temp[i]);*/
        /* printf("\n");*/

        s[i] = temp[i];
    }
}
