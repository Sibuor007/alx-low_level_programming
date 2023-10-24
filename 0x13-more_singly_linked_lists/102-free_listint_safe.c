#include "lists.h"

/**
 * free_listint_safe - function that deletes a list
 * @h: pointer to the list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int size;
	listint_t *ptr;

	if (!*h || !h)
	return (0);

	while (*h)
	{
		size = *h - (*h)->next;
		if (size > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
