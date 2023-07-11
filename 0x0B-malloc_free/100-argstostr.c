#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - This function concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the concatenated string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Next, get the length of the argument array */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			len++;
		}
		len ++; /* Create space for the new line character */
	}
	len += 1; /* Create space for the null terminator */
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
