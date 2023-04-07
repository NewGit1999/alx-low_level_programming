#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *val = ht;
	hash_node_t *h;
	unsigned int a;

	a = 0;
	while (a < ht->size)
	{
		h = val->array[a];
		while (h != NULL)
		{
			free(h->key);
			free(h->value);
			free(h);
			h = h->next;
		}
		a++;
	}
	free(ht->array);
	free(ht);
}
