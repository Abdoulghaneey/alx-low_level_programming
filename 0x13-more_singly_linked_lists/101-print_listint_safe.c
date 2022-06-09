#include "lists.h"
/**
 *add_nodeaddr - A function that mallocs a new space for a list
 *@head: A double pointer that points to my second list header, head_2.
 */
addr_list *add_nodeaddr(addr_list **head, const void *addr)
{
	addr_list *new_node;

	new_node = malloc(sizeof(addr_list));
	if (new_node == NULL)
	{
		free_listaddr(*head);
		exit (98);
	}
	new_node->addr = addr;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 *free_listaddr - a function that frees a linked list
 *@head: a pointer variable that points to the start of a newly made list
 */
void free_listaddr(addr_list *head)
{
	addr_list *current_node;
	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
/**
 *print_listint_safe - a function that prints the node and the
 *number within a node,
 *Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	addr_list *current_NewNode;
	addr_list *head_2;
	size_t i;

	i = 0;
	head_2 = NULL;
	while (head != NULL)
	{
		current_NewNode = head_2;
		while (current_NewNode != NULL)
		{
			if (head == current_NewNode->addr)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_listaddr(head_2);
				return (i);
			}
			current_NewNode = current_NewNode->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_nodeaddr(&head_2, head);
		head = head->next;
		i++;
	}
	free_listaddr(head_2);
	return (i);
}
