#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*Write a program that prints all possible different combinations of two digits
*Return: 0
*/
int main(void)
{
int i, a, b;
i = 0;
	while (i < 100)
	{
		a = i % 10;
		b = i / 10;

		if (b < a)
	{
		putchar(b + '0');
		putchar(a + '0');

	if (i < 89)
	{
		putchar(44);
		putchar(32);
	}
	}

	i++;
	}
		putchar('\n');
return (0);
}
