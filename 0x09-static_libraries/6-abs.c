#include "main.h"

/**
 * _abs - The function prints the absolute value of an integer
 * @num: Parameter that copies the value whose absolute value is required
 *
 * Return: Returns value od data type int
 */
int _abs(int num)
{
int y;

if (num < 1)
{
	y = -1 * num;
	return (y);
}
else if (num == 0)
{
	y = 0;
	return (y);
}
else
{
	return (num);
}
}
