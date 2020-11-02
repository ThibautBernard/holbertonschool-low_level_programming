#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print integer from a node
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nb_nodes = 0;

	while (h != NULL)
	{
		nb_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nb_nodes);
}
