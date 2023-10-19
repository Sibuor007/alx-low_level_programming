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
	list_t *temp;

	temp = h;

	while (temp != 0)
 	{
		if (temp->str == NULL) {
			printf("[0] (nil)\n");
 		} else {
			printf("[%u] %s \n", temp->length, temp->str);
		}
	temp = temp->next;
	count++;
	}
	return count;
}
