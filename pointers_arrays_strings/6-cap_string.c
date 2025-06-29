#include "main.h"
/**
* cap_string - capitalises all words of a string
*
* @str: pointer to string to be capitalised
* Return: pointer to string
*/

char *cap_string(char *str)
{
	int i;
	int j;
	char spcl[] = {' ', ',', ';', '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while (spcl[j] != '\0')
		{
			if (str[i] == spcl[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}
	return (str);
}
