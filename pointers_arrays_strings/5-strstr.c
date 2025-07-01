#include "main.h"

/**
* _strstr- finds the first occurrence of the substring in haystack
* @haystack: pointer to the string
* @needle: pointer to the substring to be found
* Return: pointer to haystack where substring is located.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (needle[i] != '\0')
	{
		j = 0;

		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i] && haystack[j + 1] == needle[i + 1])
			{
				return (haystack + j);
			}
		j++;
		}
	i++;
	}
return (0);
}
