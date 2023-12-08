#include "lists.h"

/**
 * sum_dlistint - function that sums all the data in a list
 * @head: pointer to the list
 * Return: total of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int total;
	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
