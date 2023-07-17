#include <stdio.h>

/**
 * main - Prints the file name from whic the program was compiled
 *
 * Return: Returns data of type int
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
