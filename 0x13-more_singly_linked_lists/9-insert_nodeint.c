#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node at a given
 * position
 * @head: pointer to the linked list
 * @idx: position for the insertion
 * @n: data
 * Return: NULL or pointer of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *prev_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; prev_node && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = prev_node->next;
			prev_node->next = new_node;
			return (new_node);
		}
		else
			prev_node = prev_node->next;
	}

	return (NULL);
}
