#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to be retrieved, starting from 0.
 * Return:
 * If the specified node exists, return a pointer to the node.
 * If the node does not exist (index exceeds
 * list length or list is empty), return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (current != NULL && index > 0)
	{
	current = current->next;
	index--;
	}
	if (current == NULL || index > 0)
	{
		return (NULL);
	}

	return (current);
}

