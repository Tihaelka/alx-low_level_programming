#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Description:
 * This function frees the memory allocated for each node in a linked list.
 * It takes a pointer to a pointer to the head of the list as its parameter.
 * The function iterates through the list, freeing each node one by one.
 * After freeing all nodes, it sets the head pointer
 * to NULL to indicate that the
 * linked list is now empty
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	}
}

