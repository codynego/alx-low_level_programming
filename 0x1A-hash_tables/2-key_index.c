#include "hash_tables.h"

/**
 * key_index - Gets the index of a key using hash_djb2
 * @key: The key to get the hash
 * @size: size of the array
 *
 * Return: returns the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int key_index;

	hash = hash_djb2(key);
	key_index = hash % size;

	return (key_index);
}
