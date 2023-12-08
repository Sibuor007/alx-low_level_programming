#include "lists.h"

/**
 * find_listint_loop - function to find a loop in
 * a linked list
 * @head: pointer to the linked list
 * Return: resulting address, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail_slow = head;
	listint_t *cheetah_fast = head;

	if (head == NULL)
	return (NULL);

	while (snail_slow && cheetah_fast && cheetah_fast->next)
	{
		cheetah_fast = cheetah_fast->next->next;
		snail_slow = snail_slow->next;
		if (cheetah_fast == snail_slow)
		{
			snail_slow = head;
			while (snail_slow != cheetah_fast)
			{
				snail_slow = snail_slow->next;
				cheetah_fast = cheetah_fast->next;
			}
			return (cheetah_fast);
		}
	}

	return (NULL);
}
