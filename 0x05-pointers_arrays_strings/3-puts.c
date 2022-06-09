#include "main.h"
/**
 * _puts - function to print string
 * Description - prints a tring, followed by a new line
 * *@str: function that accepts an input saved into str
 * Return: Always 0 (Success)
 *
 */
void _puts(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
