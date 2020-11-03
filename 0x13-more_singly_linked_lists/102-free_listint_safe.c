#include "lists.h"
#include <stdio.h>

/**
 * free_no_loop - free linked list
 * if no loop inside
 * @slow: head of linked list
 * Return: number of nodes
 */
int free_no_loop(listint_t *slow)
{
	int i = 0;
	listint_t *tmp;

	while (slow != NULL)
	{
		tmp = slow;
		slow = slow->next;
		free(tmp);
		i++;
	}
	i++;
	return (i);
}
/**
 * free_listint_safe - free a linked list
 * @h: linked list
 * Return: number of nodes deleted
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *fast = *h, *slow = *h;
	int i = 0, node_loop, meet_same_node = 0;

	if (*h == NULL || (*h)->next == NULL)
		exit(98);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (slow != fast)
	{
		slow = *h;
		*h = NULL;
		return (free_no_loop(slow));
	}
	slow = *h;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	node_loop = slow->n;
	i = 0;
	slow = *h;
	while (slow != NULL)
	{
		tmp = slow;
		slow = slow->next;
		free(tmp);
		if (node_loop == slow->n && meet_same_node > 0)
			break;
		if (node_loop == slow->n)
			meet_same_node++;
		i++;
	}
	*h = NULL;
	return (i);
}
