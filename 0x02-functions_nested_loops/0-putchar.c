#include "main.h"

/**
 * print_string - This function prints the characters iteratively
 * @str: current parameter whose value is to be printed
 *
 * Return: Returns void
 */
void print_string(const char str[])
{
int i;
i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
/**
 * main - entry point
 *
 * Return: Returns value of data type init
 */
int main(void)
{
print_string("_putchar");
_putchar('\n');
return (0);
}
