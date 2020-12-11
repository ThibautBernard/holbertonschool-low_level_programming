#include "lists.h"
/**
 * get_dnodeint_at_index - get a node index
 * @head: linked list
 * @index: index of node needed
 * Return: NULL or node from the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
