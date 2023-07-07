#include "main.h"
#include <stdio.h>

/**
 * main - This function prints all the arguments passed to it
 * @argc: Parameter that holds the value of the number of arguments passed
 * @argv: Parameter that holds the array of strings passed as arguments
 *
 * Return: Always Success (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
