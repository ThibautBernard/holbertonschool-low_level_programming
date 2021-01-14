#include "hash_tables.h"

/**
 * _strn - count length of string
 * @str: string
 * Return: length
 */
int _strn(const char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i])
		{
			i++;
		}
	}
	return (i);
}
/**
 * hash_table_get - get value of a key
 * @ht: hash table
 * @key: the key to search
 * Return: value of the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (key == NULL || _strn(key) == 0 || ht == NULL)
		return (NULL);
	int key_index = hash_djb2((unsigned char *)key) % ht->size;

	hash_node_t *ptr = ht->array[key_index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
