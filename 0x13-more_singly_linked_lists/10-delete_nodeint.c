#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert node at index
 * @head: linked list
 * @idx: index to add
 * @n: n to store in the node
 * Return: adress of the new node or null
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *store = *head;

	while (store != NULL)
	{
		if (i == index)
		{
			free(store);
			return (1);
		}
		store = store->next;
		i++;
	}
	printf("[%d]\n", store->n);
	return (-1);
}
