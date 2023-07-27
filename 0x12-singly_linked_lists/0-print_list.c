#include "lists.h"

/**
 * print_list - Prints the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function prints the elements of the linked list,
 *              along with their lengths.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s", (unsigned long)strlen(h->str), h->str);
		}
		else
		{
			printf("[0] (nil)");
		}

		h = h->next;
		node_count++;

		if (h != NULL)
		{
			printf("\n");
		}
	}

	printf("\n");

	return (node_count);
}

