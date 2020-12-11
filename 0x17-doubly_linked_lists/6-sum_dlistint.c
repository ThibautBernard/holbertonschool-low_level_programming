#include "lists.h"
/**
 * sum_dlistint - get sum of all nodes n
 * @head: linked list
 * Return: 0 if list empty or sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
