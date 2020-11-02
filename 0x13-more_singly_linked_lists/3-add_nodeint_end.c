#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * @head: pointer of pointer that contain adress of
 * last node or NULL
 * @n: integer
 * Return: adress of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next;

	next = malloc(sizeof(listint_t));
	if (next == NULL)
		return (NULL);
	if (next != NULL)
	{
		next->n = n;
		next->next = NULL;
		if (*head == NULL)
			*head = next;
		else
		{
			listint_t *tmp = *head;

			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = next;
		}
	}
	return (next);
}
