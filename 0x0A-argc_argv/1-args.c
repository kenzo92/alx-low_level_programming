#include "main.h"
#include <stdio.h>

/**
 * main - This function prints the number of arguments passed to a command
 * @argc: Prameter that holds the number of arguments
 * @argv: Parameter that holds the array of strings passed as arguments
 *
 * Return: Always success (0)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
