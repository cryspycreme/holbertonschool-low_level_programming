#include "main.h"
#include <stdio.h>

/**
 * _abs- computes the absolute value of an integer
 *
 * Description: computes the absolute value of an integer
 * @i: interger to be checked
 * Return: if i < 0, return -i; else return i
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
