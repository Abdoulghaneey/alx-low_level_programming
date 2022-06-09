#include "main.h"
#define MAX_SIZE 100
/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
        for (n = 0; dest[n] != '\0'; n++)
        {
                src[n] = dest[n];
        }
        src[n] = '\0';

        return (dest);
}
