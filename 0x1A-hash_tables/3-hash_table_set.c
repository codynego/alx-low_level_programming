#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - A  fucntion that add an element to the hash table
 * @ht: the hash table
 * @key: The key of the hash table
 * @value: the value of the key
 *
 * Return: return 1 on success and 0 on failure
 * Description: none
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;

	key_idx = key_index(key, ht->size);

	hash_node_t *tmp;

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = NULL;

	if (ht->array[key_idx] == NULL)
	{
		ht->array[key_idx] = tmp;
	}
	else
	{
		hash_node_t *current;

		current = ht->array[key_idx];
		while (current->next != NULL)
		{
			current = current->next;
		}
		if (current->next == NULL)
		{
			current->next = tmp;
		}
		current = NULL;
		free(current);
	}
	tmp = NULL;
	free(tmp);
	return (1);
}
