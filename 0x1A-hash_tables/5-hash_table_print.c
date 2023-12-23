#include "hash_tables.h"

/**
 * hash_table_print - function to prints a hash table.
 * @ht: pointer to the hash table
 * Description: Key/value pairs printed in order
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int k;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			temp = ht->array[k];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
