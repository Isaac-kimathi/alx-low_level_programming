#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to a hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *nd, *tpr;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			nd = ht->array[x];
			while (nd != NULL)
			{
				tpr = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = tpr;
			}
		}
	}
	free(hd->array);
	free(hd);
}
