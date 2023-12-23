#include "hash_tables.h"

/**
 * hash_table_delete - function to deletes a hash table.
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *top = ht;
	hash_node_t *new_node, *temp;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			new_node = ht->array[k];
			while (new_node != NULL)
			{
				temp = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = temp;
			}
		}
	}
	free(top->array);
	free(top);
}
