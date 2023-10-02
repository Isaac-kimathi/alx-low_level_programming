#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 * or pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ht->array[x] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0, otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nw, *tpr;
	char *cpy_val;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy_val = strdup(value);
	if (cpy_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tpr = ht->shead;
	while (tpr)
	{
		if (strcmp(tpr->key, key) == 0)
		{
			free(tpr->value);
			tpr->value = cpy_val;
			return (1);
		}
		tpr = tpr->snext;
	}

	nw = malloc(sizeof(shash_node_t));
	if (nw == NULL)
	{
		free(cpy_val);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(cpy_val);
		free(nw);
		return (0);
	}
	nw->value = cpy_val;
	nw->next = ht->array[idx];
	ht->array[idx] = nw;

	if (ht->shead == NULL)
	{
		nw->sprev = NULL;
		nw->snext = NULL;
		ht->shead = nw;
		ht->stail = nw;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nw->sprev = NULL;
		nw->snext = ht->shead;
		ht->shead->sprev = nw;
		ht->shead = nw;
	}
	else
	{
		tpr = ht->shead;
		while (tpr->snext != NULL && strcmp(tpr->snext->key, key) < 0)
		tpr = tpr->snext;
		nw->sprev = tpr;
		nw->snext = tpr->snext;
		if (tpr->snext == NULL)
			ht->stail = nw;
		else
			tpr->snext->sprev = nw;
		tpr->snext = nw;
	}
	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 * a key in a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 * Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *hd = ht;
	shash_node_t *nd, *tpr;

	if (ht == NULL)
		return;

	nd = ht->shead;
	while (nd)
	{
		tpr = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = tpr;
	}

	free(hd->array);
	free(hd);
}
