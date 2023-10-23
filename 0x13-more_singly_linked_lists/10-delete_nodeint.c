#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at a
 * given position
 * @head: pointer to the linked list
 * @index: position for deletion
 * Return: 1 on success, and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = *head;
	listint_t *the_node = NULL;
	unsigned int j = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev_node);
		return (1);
	}

	while (j < index - 1)
	{
		if (prev_node == NULL || (prev_node->next) == NULL)
			return (-1);
		prev_node = prev_node->next;
		j++;
	}

	the_node = prev_node->next;
	prev_node->next = the_node->next;
	free(the_node);

	return (1);
}
