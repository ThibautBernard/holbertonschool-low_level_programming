#include "lists.h"
/**
 * insert_dnodeint_at_index - add a new node at the index
 * @h: linked list adress
 * @idx: index
 * @n: number to add
 * Return: new node  or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h == NULL || h == NULL)
		return (NULL);
	while (current)
	{
		if (counter == (idx - 1))
			break;
		counter++;
		current = current->next;
	}
	if (counter == (idx - 1) && current->next)
	{
		new->n = n;
		current->next->prev = new;
		new->next = current->next;
		current->next = new;
		new->prev = current;
		return (new);
	}
	else if (counter == (idx - 1) && current->next == NULL)
	{
		return (add_dnodeint_end(&current, n));
	}
	return (NULL);
}
