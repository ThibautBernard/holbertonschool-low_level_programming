#include "hash_tables.h"

/**
 * _strlen - count length of string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
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
 * add_node - add node at the begginning
 * @head: first node
 * @key: key
 * @value: value
 * Return: pointer to new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *next;

	next = malloc(sizeof(hash_node_t));
	if (next == NULL)
		return (NULL);
	next->key = strdup(key);
	next->value = strdup(value);
	next->next = *head;
	*head = next;
	return (next);
}
/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key string
 * @value: value of the key
 * Return: 1 if succeed else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int key_index = 0;

	if (key == NULL || _strlen(key) == 0)
		return (0);
	key_index = hash_djb2((unsigned char *) key) % ht->size;
	if (ht->array[key_index] == NULL)
	{
		hash_node_t *head = NULL;

		ht->array[key_index] = add_node(&head, key, value);
		return (1);
	}
	ht->array[key_index] = add_node(&ht->array[key_index], key, value);
	return (1);

}
