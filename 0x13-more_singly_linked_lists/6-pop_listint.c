#include "lists.h"

/**
 * pop_listint - function that frees the first node
 * @head: pointer to the linked list
 * Return: data is successful, 0 if head is NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *prev_node;
	int data;

	if (head == NULL || *head == NULL)
	return (0);

	data = (*head)->n;
	prev_node = (*head)->next;
	free(*head);
	*head = prev_node;

	return (data);
}
