#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;
	return (len);
}
