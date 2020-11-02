#include "lists.h"
/**
 * reverse_listint - reverse the linked list
 * @head: linked list
 * Return: adress of end of linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
