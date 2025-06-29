#include "main.h"

/**
*
*/

function
char *cap_string(char *str)
{
 	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] == 32 || str[i] == '\n' || str[i] == '\t' || str[i] == 46) && (str[i + 1] >= 97 && str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
