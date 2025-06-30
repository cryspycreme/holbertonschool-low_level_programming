/**
 * _strspn- gets the lenth of a prefix substring
 *
 * @s: pointer to string of characters
 * @accept: pointer to string of characters to be accepted
 * Return: result as an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int result = 0;

	i = 0;

	while (s[i] != ',')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if ((s[i]) == accept[j])
			{
				result = 1 + result;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (result);
}
