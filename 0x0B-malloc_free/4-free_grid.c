#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees memory block allocated for q 2D array
 * @grid: Parameter that points to the address of the memory block
 * @height: Parameter that copies the height of the 2D array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{

	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
