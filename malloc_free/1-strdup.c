#include "main.h"
#include <stdlib.h>

/**
 * _strdup- returns pointer to newly allocated space in memory
 *
 * @str: the string to be duplicated
 * Return: pointer to duplicated string, or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/*find the length of str*/
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	/*allocate memory for duplicate string*/
	dup = malloc(sizeof(*dup) * i + 1);

	/*duplicate string*/
	i = 0;

	while (str[i] != '\0')
	{
		if (dup == NULL)
		{
			return (NULL);
		}
		else
		{
			dup[i] = str[i];
		}
	i++;
	}
	return (dup);
}
