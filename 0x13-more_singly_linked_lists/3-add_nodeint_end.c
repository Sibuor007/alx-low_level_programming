#include "lists.h"

/**
 * add_nodeint_end - function that inserts node to end
 * @head: pointer to the linked list
 * @n: relevant data item
 * Return: address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;
	return (newnode);
}
