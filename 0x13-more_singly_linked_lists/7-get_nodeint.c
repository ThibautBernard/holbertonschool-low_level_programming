#include "lists.h"
/**
 * get_nodeint_at_index - search node
 * @head: linked list
 * @index: index to find in linked list
 * Return: the node that equal to index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
