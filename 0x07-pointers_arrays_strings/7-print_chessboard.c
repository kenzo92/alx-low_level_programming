#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - This function prints a chess board
 * @a: Parameter which denotes a 2D array
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
