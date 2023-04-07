#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tab;
	unsigned long int a;
	int print = 0;

	if (ht == NULL)
		return;
	printf("{");
	a = 0;
	while (a < ht->size)
	{
		if (ht->array[a] != NULL)
		{
			tab = ht->array[a];
			while (tab != NULL)
			{
				if (print)
					printf(", ");
				printf("'%s': '%s'", tab->key, tab->value);
				print = 1;
				tab = tab->next;
			}
		}
		a++;
	}
	printf("}\n");
}
