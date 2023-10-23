#include "lists.h"

/**
 * free_listint - function for deleting a linked list
 * @head: pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *prev_node;

	while (head != NULL)
	{
		prev_node = head->next;
		free(head);
		head = prev_node;
	}
}
