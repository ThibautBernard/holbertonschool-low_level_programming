#include "lists.h"

/**
 * list_len - count number of elements in
 * of these nodes and return number of nodes
 * @h: singly linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
