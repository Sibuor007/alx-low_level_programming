#include "lists.h"

/**
 * get_nodeint_at_index - function that returns a given node in the list
 * @head: pointer to the linked list
 * @index: position of the node in question
 * Return: pointer to the nth node, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *prev_node = head;

	while (j < index && prev_node)
	{
		prev_node = prev_node->next;
		j++;
	}

	return (prev_node ? prev_node : NULL);
}
