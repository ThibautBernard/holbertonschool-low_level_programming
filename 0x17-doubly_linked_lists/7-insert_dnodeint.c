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
		new->n = n;
		new->prev = NULL;
		new->next = current->next;
		current->prev = new;
		*h = new;
		return (new);
	}
	else
	{
		new->n = n;
		while (current)
		{
			counter++;
			if (counter == idx && current->next)
			{
				current->next->prev = new;
				new->next = current->next;
				current->next = new;
				new->prev = current;
				return (new);
			}
			else if (counter == idx && current->next == NULL)
			{
				current->next = new;
				new->prev = current;
				new->next = NULL;
				return (new);
			}
			current = current->next;
		}
	}
	return (NULL);
}
