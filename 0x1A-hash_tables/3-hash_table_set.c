#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: pointer hash table
 * @key: the key
 * @value: value of key
 * Return: 1 in success , 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *vl;
	unsigned int a;

	if (ht == NULL || strlen(key) == 0)
		return (0);
	a = key_index((const unsigned char *)key, ht->size);
	vl = ht->array[a];
	if (ht->array[a] == NULL)
	{
		node = malloc(sizeof(hash_node_t *));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[a] = node;
		return (1);
	}
	while (vl)
	{
		if (strcmp(vl->key, key) == 0)
		{
			free(vl->value);
			vl->value = strdup(value);
			return (1);
		}
		vl = vl->next;
	}
	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[a];
	ht->array[a] = node;
	return (1);
}
