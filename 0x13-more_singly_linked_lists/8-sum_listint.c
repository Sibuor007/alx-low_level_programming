#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * @head: pointer to the linked list
 * Return: result of the operation
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *prev_node = head;

	while (prev_node != NULL)
	{
		result = result + prev_node->n;
		prev_node = prev_node->next;
	}

	return (result);
}
