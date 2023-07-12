#include "main.h"
#include <stdio.h>

/**
 * main - This function prints the name of a program
 * @argc: Paramter that holds the value of the number of arguments
 * @argv: Parameter that holds the array of arguments
 *
 * Return: Always success (0)
 */

int main(int argc, char *argv[])
{
	int i;
	char *str;

	str = argv[0];

	i = 0;
	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	str[i] = '\0';
	_putchar('\n');

	return (0);
}
