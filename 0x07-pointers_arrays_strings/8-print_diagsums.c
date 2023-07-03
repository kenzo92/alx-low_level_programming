#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: Parameter that copies the 2D array
 * @size: Parameter that stores the sum of the diagonals
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum1 += a[i * size + i];
	sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", sum1);
	printf("%d", sum2);
	printf("\n");
}
