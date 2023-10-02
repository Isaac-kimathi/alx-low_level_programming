#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *   a key in a hash table.
 * @ht: pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *  Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd_rv;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	nd_rv = ht->array[idx];
	while (nd_rv && strcmp(nd_rv->key, key) != 0)
		nd_rv = nd_rv->next;

	return ((nd_rv == NULL) ? NULL : nd_rv->value);
}
