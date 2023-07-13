#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function returns an ordered array of elements
 * @min: value of the minimum element in the ordered array
 * @max: value of the maximum element in the ordered array
 *
 * Return: Returns data of type int
 */

int *array_range(int min, int max)
{
	int i, size;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	a = malloc(size * sizeof(int));

	i = 0;
	while (i < size)
	{
		a[i] = min;
		min++;
		i++;
	}

	return (a);
}
