#include "hash_tables.h"
/**
 * key_index - reurn the key index in the hash table
 * @key: key to enter
 * @size: size of the array in hash table
 * Return: the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
