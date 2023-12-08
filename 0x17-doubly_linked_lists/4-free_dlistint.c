#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: pointer to the list
 * Return: no return value
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
