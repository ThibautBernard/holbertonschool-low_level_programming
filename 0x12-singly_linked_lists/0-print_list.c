#include "lists.h"

/**
 * print_list - print content of list and all
 * of these nodes and return number of nodes
 * @h: singly linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			if (h->str != NULL)
			{
				printf("[%d] ", h->len);
				printf("%s\n", h->str);
			}
			else
			{
				printf("[0] ");
				printf("(nil)\n");
			}
				h = h->next;
		}
	}
	return (i);
}
