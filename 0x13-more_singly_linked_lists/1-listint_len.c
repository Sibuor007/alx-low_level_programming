#include "lists.h"

/**
 * listint_len - function to return size of elements
 * @h: pointer used to traverse the linked list
 * Return: size
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
