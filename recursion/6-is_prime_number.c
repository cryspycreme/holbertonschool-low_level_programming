#include "main.h"

/**
* eval_prime_num- determines if int is a prime no.
*
* @n: number to be evaluated
* @x: divisor
* Return: 1 if int is prime, 0 if otherwise
*/

int eval_prime_num(int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (eval_prime_num(n, x + 1));
}

/*main function*/

/**
* is_prime_number - determines if int is a prime no.
*
* @n: number to be evaluated
* Return: 1 if int is prime, 0 if otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (eval_prime_num(n, 2));
}
