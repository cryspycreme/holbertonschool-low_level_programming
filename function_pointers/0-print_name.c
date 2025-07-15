#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name- prints a name
 *
 * @name: pointer to a name
 * @f: pointer to a function that takes a character pointer as input
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
