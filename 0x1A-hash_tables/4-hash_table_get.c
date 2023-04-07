#include "hash_tables.h"
/**
 * hash_table_get - retirves a value of key
 * @ht: hash table
 * @key: key to look for
 * Return: value associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int a;
	hash_node_t *b;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	a = key_index((const unsigned char *)key, ht->size);
	b = ht->array[a];
	if (b == NULL)
		return (NULL);

	while (b != NULL)
	{
		if (strcmp(key, b->key) == 0)
		{
			return (b->value);
		}
		b = b->next;
	}
	return (NULL);
}
