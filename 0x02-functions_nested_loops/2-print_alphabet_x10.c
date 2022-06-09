#include "holberton.h"
/**
*print_alphabet_x10 - print 10 times the alphabet, in lowercase.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int j, i;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
