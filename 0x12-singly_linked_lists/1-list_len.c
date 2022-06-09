#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return: unsigned int that identifies the number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	for (; h; count++)
	{
		h = h->next;
	}
	return (count);
}
