#include "lists.h"
/**
 * pop_listint - remove the first node
 * @head: pointer of pointer that contain adress of
 * Return: data in this node
 */
int pop_listint(listint_t **head)
{
	int tmp_nb;
	listint_t *to_free = *head;

	if (*head == NULL)
		return (0);
	tmp_nb = to_free->n;
	*head = (*head)->next;
	free(to_free);
	return (tmp_nb);
}
