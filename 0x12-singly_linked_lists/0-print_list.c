#include <stdio.h>
#include "lists.h"

/**
 * print_list - the function that prints the elements
 * @h: pointer associated with the list
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s \n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
