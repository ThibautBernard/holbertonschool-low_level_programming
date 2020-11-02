#include "lists.h"
/**
 * sum_listint - sum of all data in each node
 * @head: linked list
 * Return: the sum of all data in each node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
