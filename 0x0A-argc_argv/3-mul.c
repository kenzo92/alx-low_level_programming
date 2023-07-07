#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function returns the product of two arguments
 * @argc: Parameter that holds the number of arguments passed
 * @argv: Parmeter that holds the array of arguments to be multiplied
 *
 * Return: Always Success (0)'
 */

int main(int argc, char *argv[])
{
	int product, i;

	product = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);

	return (0);
}
