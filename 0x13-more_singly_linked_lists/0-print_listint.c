#include "lists.h"

/**
 * print_listint - function that prints list elements
 * @h: pointer to the linked list
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
