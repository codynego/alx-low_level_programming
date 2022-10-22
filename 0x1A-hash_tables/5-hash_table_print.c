#include "hash_tables.h"

/**
 * hash_table_print - prints an hash table
 * @ht: the hash table to print
 *
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *tmp;
	char *sep;

	tmp = ht;
	printf("{");
	sep = "";
	for (int i = 0; i < ht->size; i++)
	{
		if (tmp->array[i] == NULL)
		{
			continue;
		}
		else
		{
			printf("%s'%s': '%s'", sep, tmp->array[i]->key, tmp->array[i]->value);
			sep = ", ";
			if (tmp->array[i]->next == NULL)
			{
				continue;
			}
			else
			{
				hash_node_t *current;

				current = tmp->array[i]->next;
				while (current != NULL)
				{
					printf("%s'%s': '%s'", sep, current->key, current->value);
					current = current->next;
				}
			}
		}
	}
	printf("}\n");
}
