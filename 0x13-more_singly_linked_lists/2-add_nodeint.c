#include "lists.h"
/**
 * add_nodeint - add a new node at the begginning
 * @head: pointer of pointer that contain adress of
 * last node or NULL
 * @n: integer
 * Return: adress of the new nodes or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *next;

	next = malloc(sizeof(listint_t));
	if (next == NULL)
		return (NULL);
	next->n = n;
	next->next = *head;
	*head = next;
	return (next);
}
