#include "hash_tables.h"

/**
 * hash_table_create - A function that creates an hash table
 * @size: The size of the array
 *
 * Return: a pointer to the new hash_table
 * Description: none
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = NULL;
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
	{
		return (NULL);
	}
	hashtable->array = malloc(size * sizeof(hash_node_t));
	if (hashtable->array == NULL)
	{
		return (NULL);
	}
	hashtable->size = size;
	for (int i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}

	return (hashtable);
}
