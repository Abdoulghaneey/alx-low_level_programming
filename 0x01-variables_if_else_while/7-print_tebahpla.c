#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*a program that prints the lowercase alphabet in reverse
*Return: 0
*/
int main(void)
{
char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
return (0);
}
