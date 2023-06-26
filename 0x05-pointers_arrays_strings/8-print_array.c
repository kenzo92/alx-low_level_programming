#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints the element of an array
 * @a: Parameter that copies the array
 * @n: Parameter that denotes the number of elements in the array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
	if (i != (n -1))
	{
	printf("%d, ", *(a + i));
	i++;
	}
	else
	{
	printf("%d", *(a + i));
	break;
	}
	}
	printf("\n");
}
