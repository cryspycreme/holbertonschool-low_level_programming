#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: the string to search through
 * @needle: the exact string to match
 *
 * Return: pointer to substring location.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		/*if substring empty, return original string*/
		if (needle[0] == '\0')
		{
			return (haystack);
		}

		j = 0;

		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0' && haystack[i + j] != '\0')
			{
				/*keep running through needle string till needle != haystack match*/
				if (needle[j] != haystack[i + j])
				{
					break;
				}
				j++;

		/**
		*if there is a complete match (ie. reached the end of needle),
		*return pointer to location of match in haystack
		*/
				if (needle[j] == '\0')
				{
					return (haystack + i);
				}
			}
		}
	i++;
	}
return (0);
}
