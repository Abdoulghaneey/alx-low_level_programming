#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*Print the alphabet in lowcase expect q and e
*Return: 0
*/
int main(void)
{
char ch, e, q;
e = 'e';
q = 'q';
	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != e && ch != q)
	putchar(ch);
	putchar('\n');
return (0);
}
