#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * @head: linked list adress
 * @n: number to add
 * Return: number of nodes or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
		new->n = n;
		new->next = NULL;
		new->prev = current;
	}
	return (new);
}
