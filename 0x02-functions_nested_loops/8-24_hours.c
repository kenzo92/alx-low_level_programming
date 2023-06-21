#include "main.h"

/**
 * jack_bauer - This functions prints every minute of the day
 *
 * Return: returns void
 */
void jack_bauer(void)
{
char i, j, k, l;

for (l = '0'; l <= '2'; l++)
{
for (k = '0'; k <= '3'; k++)
{
for (j = '0'; j <= '5'; j++)
{
for (i = '0'; i <= '9'; i++)
{
_putchar(l + '0');
_putchar(k + '0');
_putchar(':');
_putchar(j + '0');
_putchar(i + '0');
_putchar('\n');
}
}
}
}
}
