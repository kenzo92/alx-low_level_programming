#include "main.h"

/**
 * times_table - This function displays the times table
 *
 * Description: variables row, column, result, x, and y, all of
 * type int were declared
 * Return: Returns void
 */
void times_table(void)
{
	int row, column, x, y, result;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
result = row * column;
x = result / 10;
y = result % 10;
if (column == 9 && result < 10)
{
_putchar(result + '0');
}
else if (column != 9 && result < 10)
{
_putchar(result + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (column != 9 && result >= 10)
{
_putchar(x + '0');
_putchar(y + '0');
_putchar(',');
_putchar(' ');
}
else if (column == 9 && result >= 10)
{
_putchar(x + '0');
_putchar(y + '0');
}
}
_putchar('\n');
}
}
