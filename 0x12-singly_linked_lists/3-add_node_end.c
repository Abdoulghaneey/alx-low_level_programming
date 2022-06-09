#include "lists.h"
#include <string.h>
/**
 *add_node_end - a function that adds a node at the end of the list
 *@head: a double pointer taking the address of what's being passed to it
 *@str: the string to be copied
 *Return: The result of the new_node which is the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;
	int i;
	char *strcpy;

	current_node = *head;
	while (current_node && current_node->next != NULL)
		current_node = current_node->next;

	strcpy = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = i;
	new_node->str = strcpy;
	new_node->next = NULL;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
