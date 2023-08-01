#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - Returns the sum of all data in a linked list.
 * @head: Pointer to the head node of the linked list.
 * Return:
 * The sum of all data values in the linked list.
 * If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}

