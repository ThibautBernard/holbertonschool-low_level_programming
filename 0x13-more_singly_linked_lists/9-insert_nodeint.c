#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: linked list
 * @idx: index to add
 * @n: n to store in the node
 * Return: adress of the new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *next, *store = *head;

	next = malloc(sizeof(listint_t));
	if (next == NULL)
		return (NULL);
	if (idx == 0)
	{
		next->n = n;
		next->next = store;
		*head = next;
		return (next);
	}
	while (store != NULL)
	{
		if (i == (idx - 1))
			break;
		store = store->next;
		i++;
	}
	if (i == (idx - 1))
	{
		next->n = n;
		next->next = store->next;
		store->next = next;
		return (next);
	}
	return (NULL);
}
