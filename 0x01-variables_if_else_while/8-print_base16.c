#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This function prints all possible
 * hexadecimal numbers
 * variable hex_num of type char was declared
 * Return: main returns value of type int
 */
int main(void)
{
char hex_num;
for (hex_num = '0'; hex_num <= '9'; hex_num++)
{
putchar(hex_num);
}
for (hex_num = 'a'; hex_num <= 'f'; hex_num++)
{
putchar(hex_num);
}
putchar('\n');
return (0);
}
