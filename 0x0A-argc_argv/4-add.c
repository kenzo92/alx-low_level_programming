#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - This function checks if a number is positive
 * @str: Paramter that points to the number
 *
 * Return: Returns data of type int
 */

int is_positive_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * main - This function adds arguments passed to it
 * @argc: Parameter that holds the value of the number of arguments
 * @argv: Parameter that holds the array of arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(is_positive_number(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
