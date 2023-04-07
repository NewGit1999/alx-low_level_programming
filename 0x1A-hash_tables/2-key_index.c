#include "hash_tables.h"
/**
 * key_index - give index to key
 * @key: key
 * @size: size of array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a;

	a = ((hash_djb2(key)) % size);
	return (a);
}
