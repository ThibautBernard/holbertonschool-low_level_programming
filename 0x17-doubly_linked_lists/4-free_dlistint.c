#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: linked list adress
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
