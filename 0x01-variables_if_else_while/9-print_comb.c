#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*Write a program that prints all possible combinations of single-digit numbers
*Return: 0
*/
int main(void)
{
int d = 0;
	while (d < 10)
	{
		putchar(d + '0');
		if (d < 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
return (0);
}
