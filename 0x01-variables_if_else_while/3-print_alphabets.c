#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main block
* This program prints alphabet in lowcase then in uppercase.
*Return: 0
*/
int main(void)
{
char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	ch = 'A';
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
return (0);
}
