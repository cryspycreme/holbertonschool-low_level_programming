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
	/*haystack = First, solve the problem. Then, write the code.*/
	/*needle = solve*/

	while (haystack[i] != '\0')
	{
		/*checks if the byte in haystack matches the first letter in needle*/
		if (haystack[i] == needle[0])
		{
			j = 0;

			/*potential match found, now compare rest of needle*/
			while (needle[j] != '\0' && haystack[i+j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}
			/*if entire match found, return pointer to 1st match*/
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	i++;
	}
	return (0);
}
