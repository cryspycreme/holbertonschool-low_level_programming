#include "main.h"

/**
 * _sqrt_helper - performs the recursion
 * _sqrt_recursion - sets up the enviroment
 *
 * @n: no. to be square rooted
 * @target: the guess of square root
 * Return: the square root of no as int, or -1.
 */

/*helper function*/
int _sqrt_helper(int n, int target)
{
	if (target * target == n)
	{
		return (target);
	}

	if (target * target > n)
	{
		return (-1);
	}
	
	return _sqrt_helper(n, target + 1);
}

/* main function*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return _sqrt_helper(n, 0);
}
