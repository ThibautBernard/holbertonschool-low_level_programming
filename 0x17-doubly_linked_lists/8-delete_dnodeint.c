#include "lists.h"

/**
 * delete_dnodeint_at_index - delet node at index
 * @head: linked list adress
 * @index: index
 * Return: 1 if sucess or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int counter = 0;

	while (current)
	{
		if (counter == index)
			break;
		counter++;
		current = current->next;
	}
	if (counter == index)
	{
		if (*head == NULL || current == NULL)
			return (-1);
		if (*head == current) /** case of index 0 **/
			*head = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		if (current->prev != NULL)
			current->prev->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
