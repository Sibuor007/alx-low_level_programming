#include "lists.h"

/**
 * free_listint2 - function that deletes a list
 * @head: pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *prev_node;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		prev_node = (*head)->next;
		free(*head);
		*head = prev_node;
	}
	*head = NULL;
}
