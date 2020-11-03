#include "lists.h"
/**
 * free_listint2 - free a linked list of int and add null
 * @head: pointer of pointer that contain adress of
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *store = *head;

	while (store != NULL)
	{
		tmp = store;
		store = store->next;
		free(tmp);
	}
	if (store == NULL)
		*head = NULL;
}
