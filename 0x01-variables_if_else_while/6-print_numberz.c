#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*prints all single digit numbers of base 10 starting from 0
*using putchar function and cant use char variable type
*Return: 0
*/
int main(void)
{
int i;
	for (i = 0; i <= 9; i++)
	putchar(i + '0');
	putchar('\n');
return (0);
}
