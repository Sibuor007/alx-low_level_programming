#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to the list
 * @n: data
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h_d;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	h_d = *head;

	if (h_d != NULL)
	{
		while (h_d->next != NULL)
			h_d = h_d->next;
		h_d->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = h_d;

	return (new_node);
}
