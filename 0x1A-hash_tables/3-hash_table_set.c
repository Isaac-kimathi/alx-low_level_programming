#include "hash_tables.h"

/**
 * hash_table_set - Adds an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: The key to add, cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 * Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw_tbl;
	char *cpy_val;
	unsigned long int idx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy_val = strdup(value);
	if (cpy_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = cpy_val;
			return (1);
		}
	}
	nw_tbl = malloc(sizeof(hash_node_t));
	if (nw_tbl == NULL)
	{
		free(cpy_val);
		return (0);
	}
	nw_tbl->key = strdup(key);
	if (nw_tbl->key == NULL)
	{
		free(nw_tbl);
		return (0);
	}
	nw_tbl->value = cpy_val;
	nw_tbl->next = ht->array[idx];
	ht->array[idx] = nw_tbl;

	return (1);
}
