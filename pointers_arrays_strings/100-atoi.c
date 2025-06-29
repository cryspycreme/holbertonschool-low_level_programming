#include "main.h"
#include <stdio.h>

/**
* _atoi- converts string to integer
*
* @s: pointer to string
* Return: integer
*/

int _atoi(char *s)
{
	int i = 0;/*count of index in array*/
	int finalnum = 0;/*no. to be returned*/
	int digit;/*actual ch digit 0-9*/
	int evalnum = 0;/*currently eval; 1 if true, 0 if false*/
	int evaldone = 0;/*finished evaluating*/
	int sign = 1;

	while (s[i] != '\0')
	{
		digit = s[i];

		if (digit >= 48 && digit <= 57 && evaldone == 0)
		{
			finalnum = (finalnum * 10) + (digit - 48);
			evalnum = 1;
		}
		else
		{
			if (evalnum == 1)
			{
				evaldone = 1;
			}
		}
		if (evaldone == 0 && digit == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	return (finalnum * sign);
}
