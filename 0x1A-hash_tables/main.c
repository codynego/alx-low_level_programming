#include "hash_tables.h"
#include "stdio.h"

/**
 * main - the entry point of the program
 *
 * return: return 0 on success
 */

int main(void)
{
	unsigned long int size = 5;
	hash_table_t* Hash_table;
	Hash_table = hash_table_create(size);
//	unsigned long int n = key_index(str, size);
//	unsigned long int m = key_index(strr, size);
	hash_table_set(Hash_table, "mentioner", "mumbai");
	hash_table_set(Hash_table, "stylist", "mimi");
	hash_table_set(Hash_table, "joyful", "emma");
	hash_table_set(Hash_table, "dram", "bio");
	hash_table_set(Hash_table, "serafins", "true");
	hash_table_set(Hash_table, "delta", "abednego");
	hash_table_set(Hash_table, "auchi", "mizi");
	hash_table_set(Hash_table, "porthacourt", "phillip");
	hash_table_set(Hash_table, "asaba", "tyndale");
	hash_table_set(Hash_table, "beloved", "israel");
	hash_table_set(Hash_table, "heaven", "Godly");
//	printf("%ld\n", m);
	/*printf("key: %s - value: %s\n", Hash_table->array[key_index("hetairas", size)]->key, Hash_table->array[key_index("hetairas", size)]->value);
	printf("key: %s - value: %s\n", Hash_table->array[key_index("mentioner", size)]->key, Hash_table->array[key_index("mentioner", size)]->value);
	printf("key: %s - value: %s\n", Hash_table->array[key_index("stylist", size)]->key, Hash_table->array[key_index("stylist", size)]->value);
	printf("key: %s - value: %s\n", Hash_table->array[key_index("joyful", size)]->key, Hash_table->array[key_index("joyful", size)]->value);
	printf("key: %s - value: %s\n", Hash_table->array[key_index("dram", size)]->key, Hash_table->array[key_index("dram", size)]->value);
	printf("key: %s - value: %s\n", Hash_table->array[key_index("serafins", size)]->key, Hash_table->array[key_index("serafins", size)]->value);
	printf("key: %s - value: %s\n", Hash_table->array[key_index("sex", size)]->key, Hash_table->array[key_index("sex", size)]->value);*/
	printf("==============================================\n");
	printf("before deletion\n");
	hash_table_print(Hash_table);
	printf("==============================================\n");
	printf("after deletion\n");
	hash_table_delete(Hash_table);
	hash_table_print(Hash_table);
}
