#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - print a list
 * @head: linked list
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head, *slow = head;
	int i = 0;

	if (head == NULL)
		exit(98);
	printf("[%p] %d\n", (void*)slow->next, slow->n);
	while (slow->next != NULL)
	{
		slow = slow->next;
		if (fast->next->next != NULL)
			fast = fast->next->next;
		i++;
		printf("[%p] %d\n", (void*)slow, slow->n);
		if (slow == fast && fast->next->next != NULL)
		{
			i++;
			slow = slow->next;
			fast = fast->next->next;
			printf("[%p] %d\n", (void*)slow, slow->n);
			printf("-> [%p] %d\n", (void*)fast, fast->n);
			break;
		}
	}
	return (i);
}
