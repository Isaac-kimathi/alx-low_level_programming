#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *    Otherwise - a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nw_tbl;
	unsigned long int x;

	nw_tbl = malloc(sizeof(hash_table_t));

	if (nw_tbl == NULL)
		return (NULL);

	nw_tbl->size = size;
	nw_tbl->array = malloc(sizeof(hash_node_t *) * size);

	if (nw_tbl->array == NULL)
	{
		free(nw_tbl);
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		nw_tbl->array[x] = NULL;
	}

	return (nw_tbl);
}
