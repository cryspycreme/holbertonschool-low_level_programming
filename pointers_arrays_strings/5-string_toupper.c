#include "main.h"

/**
* string_toupper- changes all lowercase letters to uppercase
*
* @str: pointer to string
* Return: character string
*/
char *string_toupper(char *str)
{
    int i; /*loop counter*/

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
			str[i] = (str[i] - 32);
        }
        i++;
    }
	return (str);
}
