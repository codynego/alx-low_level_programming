#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: The hash table to delete
 *
 */


void hash_table_delete(hash_table_t *ht)
{
	for (int i = 0; i < ht->size; i++)
	{
		ht->array[i] = NULL;
		free(ht->array[i]);
	}
	ht = NULL;
	free(ht);
}
