#include "lists.h"
/**
 * listint_len - return number of nodes
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nb_nodes = 0;

	while (h != NULL)
	{
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}
