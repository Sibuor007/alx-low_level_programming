#include "lists.h"

/**
 * add_nodeint - function that inserts newnode at beginning
 * @head: pointer to the linked list
 * @n: item for the newnode
 * Return: address to the newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
