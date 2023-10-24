#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that counts nodes
 * @head: pointer to the linked list
 * Return: 0 on failure, count on success
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snail_slow, *cheetah_fast;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	snail_slow = head->next;
	cheetah_fast = (head->next)->next;

	while (cheetah_fast)
	{
		if (snail_slow == cheetah_fast)
		{
			snail_slow = head;
			while (snail_slow != cheetah_fast)
			{
				count++;
				snail_slow = snail_slow->next;
				cheetah_fast = cheetah_fast->next;
			}

			snail_slow = snail_slow->next;
			while (snail_slow != cheetah_fast)
			{
				count++;
				snail_slow = snail_slow->next;
			}

		return (count);
		}

		snail_slow = snail_slow->next;
		cheetah_fast = (cheetah_fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints list
 * @head: pointer to the linked list
 * Return: count
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count, i = 0;
	count = looped_listint_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("%d\n", head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < count; i++)
		{
			printf("%d\n", head->n);
			head = head->next;
		}
		printf("%d\n", head->n);
	}

	return (count);
}
