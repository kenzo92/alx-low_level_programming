#include "main.h"

/**
 * print_last_digit - This function prints the last digit of an integer
 * @num: Parameter that copies the integer value whose last digit is
 * to be returned
 *
 * Description: variable y of type int is declared and used to hold value
 * of last digit
 * Return: Return value of type int
 */
int print_last_digit(int num)
{
int y;

y = num % 10;
return (y);
}
