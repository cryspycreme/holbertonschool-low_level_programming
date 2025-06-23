#include <stdio.h>

/**
* main - entry point
* Description: prints numbers from 1 to 100
* Print Fizz for multiples of 3
* Print Buzz for multiples of 5
* Print Fizzbuzz for multiples of 3 & 5
*
* Return: void
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	i++;
	}
	printf("\n");
return (0);
}
