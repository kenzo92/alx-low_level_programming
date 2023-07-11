#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - This function returns a 2D array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: Returns data of type int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
				return (NULL);
		}
	}

	return (grid);
}

