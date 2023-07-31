#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Description:
 * This function frees the memory allocated for each node in a linked list.
 * It takes a pointer to the head of the list as its parameter and iterates
 * through the list, freeing each node one by one. The function does not return
 * anything as it directly modifies the linked list by freeing the nodes.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

