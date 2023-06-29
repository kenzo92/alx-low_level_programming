#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This function reverses the elements of an array
 * @a: Parameter that copies the array
 * @n: Parameter that copies the number of element in the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
	if (i == 0)
	{
	printf("%d", a[i]);
	}
	else if (i != 0)
	{
	printf("%d, ", a[i]);
	}
	}
	printf("\n");
}
