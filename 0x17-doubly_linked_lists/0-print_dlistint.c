#include "lists.h"
/**
 * print_dlistint - print content list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
