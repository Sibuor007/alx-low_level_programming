#include <stdio.h>
#include "lists.h"

/**
 * print_list - the function that prints the elements
 * @h: pointer associated with the list
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t cnt= 0;

	while (h != NULL)
 	{
		if (h->str == NULL) {
			printf("[0] (nil)\n");
 		} else {
			printf("[%u] %s \n", h->length, h->str);
		}
	h = h->next;
	cnt++;
	}
	return (cnt);
}
