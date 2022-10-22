#ifndef HASHTABLES_H
#define HASHTABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * The key is unique in the hash table
 * @value: The value to the corresponding key
 * @Next: The pointer to the next Node of the list
 */

typedef struct hash_node_s
{
	char* key;
	char* value;
	struct hash_node_s* next;
}hash_node_t;


/**
 * hash_table_s - hash table data structure
 * @size: size of the array
 * @array: array of size @size
 *
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;

}hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char* str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif /*HASHTABLES_H*/
