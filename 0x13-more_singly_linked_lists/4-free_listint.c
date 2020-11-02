#include "lists.h"
/**
 * free_listint - free a linked list of int
 * @head: pointer of pointer that contain adress of
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
