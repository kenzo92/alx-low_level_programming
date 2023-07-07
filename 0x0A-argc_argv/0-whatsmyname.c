#include "main.h"

/**
 * main - This function prints the name of a program
 * @argc: Paramter that holds the value of the number of arguments
 * @argv: Parameter that holds the array of arguments
 *
 * Return: Always success (0)
 */

int main(int argc, char *argv[])
{
	char *print_name;

	print_name = argv[0];

	while (*print_name != '\0')
	{
	_putchar(*print_name);
	print_name++;
	}

	_putchar('\n');
	return (0);
}
