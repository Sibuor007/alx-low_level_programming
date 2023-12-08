#include "lists.h"

/**
 * reverse_listint - function that reverses 
 * the links in a list
 * @head: pointer to the linked list
 * Return: head pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *prev_node, *next_node;
	prev_node = 0;
	next_node = current_node = *head;

	while (next_node != NULL)
	{
		next_node = next_node->next;
		current_node->next =prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;

	return (*head);
}
