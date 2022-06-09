#include "lists.h"
#include <string.h>
/**
 *add_node - a function that adds a new node at the beginning of a list_t list
 *@head: A double pointer that points to the address of what's passed in
 *@str: The string to be copied by strdup
 *Return: The pointer to the next node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
