#include "main.h"
#include <stdio.h>

/**
* _strstr- finds the first occurrence of the substring in haystack
* @haystack: pointer to the string
* @needle: pointer to the substring to be found
* Return: pointer to haystack where substring is located.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i]!= '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	i++;
	}
return (0);
}
