#include "hash_tables.h"

/**
 * print_index_link - print linked list of index of hash table
 * @ptr: linked list of the index of hash table
 * @comma_start: counter to print comma and not at the start
 * Return: nothing, only print value of each node
 */
void print_index_link(hash_node_t *ptr, int comma_start)
{
	while (ptr)
	{
		if (comma_start > 0)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->next;
	}

}
/**
 * hash_table_print - print all the hash table
 * @ht: the hash table
 * Return: nothing, only print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int counter = 0;
	int no_comma_start = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (counter < ht->size)
	{
		if (ht->array[counter] != NULL)
		{
			print_index_link(ht->array[counter], no_comma_start);
			no_comma_start++;
		}
		counter++;
	}
	printf("}\n");

}
