#include "lists.h"

/**
 * add_dnodeint - function to add node
 * @head:pointer to the linked list
 * @n: data
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h_d;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	h_d = *head;

	if (h_d != NULL)
	{
		while (h_d->prev != NULL)
			h_d = h_d->prev;
	}

	new_node->next = h_d;

	if (h_d != NULL)
		h_d->prev = new_node;

	*head = new_node;

	return (new_node);
}
