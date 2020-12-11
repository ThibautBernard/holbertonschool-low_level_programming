#include "lists.h"
/**
 * dlistint_len - return number of nodes
 * @h: linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
