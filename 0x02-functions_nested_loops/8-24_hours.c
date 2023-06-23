#include "main.h"

/**
 * jack_bauer - This functions prints every minute of the day
 *
 * Description: The function returns the time in HH:MM format
 * two variables of type int are declared and used in place of
 * hours and minutes respectively
 * Return: returns void
 */
void jack_bauer(void)
{
int i, j;

for (j = 0; j <= 23; j++)
{
for (i = 0; i <= 59; i++)
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar(':');
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar('\n');
}
}
}
