#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: new creatd hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hshtb;


	if (size == 0)
		return (NULL);
	hshtb = malloc(sizeof(hash_table_t));
	if (!hshtb)
		return (NULL);
	hshtb->size = size;
	hshtb->array = calloc((size_t)hshtb->size, sizeof(hash_node_t *));
	if (hshtb->array == NULL)
		return (NULL);
	return (hshtb);
}
