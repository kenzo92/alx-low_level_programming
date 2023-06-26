#include "main.h"

/**
 * swap_int - This function swaps integer values
 * @a: Parameter that points to the first value to be swapped
 * @b: Parameter that points to the second value to be swapped
 * @temp: Parameter used to temporarily hold the value of a
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
