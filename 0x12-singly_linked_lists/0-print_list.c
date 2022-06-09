#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements fo a list
 * @h: a linked list structure
 * Return: a size_t variable which is a system specific integer
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	for (count = 0; temp; count++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}
