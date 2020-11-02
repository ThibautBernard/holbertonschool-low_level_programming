#include "lists.h"
/**
 * pop_listint - remove the first node
 * @head: pointer of pointer that contain adress of
 * Return: data in this node
 */
int pop_listint(listint_t **head)
{
	int tmp_nb;

	if (*head == NULL)
		return (0);
	listint_t *to_free =  *head;

	*head = (*head)->next;
	tmp_nb = to_free->n;
	free(to_free);
	return (tmp_nb);
}
