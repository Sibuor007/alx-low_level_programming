#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets nth node
 * @head: pointer to the list
 * @index: position of the node
 * Return: null or the node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position;
	dlistint_t *current;

	position = 0;
	if (head == NULL)
		return (NULL);

	current = head;
	while (current)
	{
		if (index == position)
			return (current);
		position++;
		current = current->next;
	}
	return (NULL);
}
