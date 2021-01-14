#include "hash_tables.h"

/**
 * free_list - free a linked list
 * @head: first node
 * Return: nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}
/**
 * hash_table_delete - free hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int counter = 0;

	while (counter < ht->size)
	{
		if (ht->array[counter])
		{
			free_list(ht->array[counter]);
		}
		counter++;
	}
	free(ht->array);
	free(ht);
}
