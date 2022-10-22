#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: the hash table to retrieve from
 * @key: the key to retrieve
 *
 * Return: returns the value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;

	key_idx = key_index(key, ht->size);
	if (strcmp(ht->array[key_idx]->key, key) == 0)
	{
		char *value = ht->array[key_idx]->value;

		return (value);
	}
	else
	{
		hash_node_t *current;

		current = ht->array[key_idx];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (current->value);
			}
			else
			{
				current = current->next;
			}
		}
		current = NULL;
		free(current);
	}

}
