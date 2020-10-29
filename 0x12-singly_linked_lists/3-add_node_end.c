#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: first node
 * @str: string to duplicate
 * Return: pointer to new last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *next;

	next = malloc(sizeof(list_t));
	if (next == NULL)
		return (NULL);
	if (next != NULL)
	{
		if (str != NULL)
		{
			next->str = strdup(str);
			for (i = 0; next->str[i]; i++)
			{
			}
			next->len = i;
			next->next = NULL;
			if (*head == NULL)
				*head = next;
			else
			{
				list_t *lnode = *head;

				while (lnode->next != NULL)
				{
					lnode = lnode->next;
				}
				lnode->next = next;
			}
		}
	}
	return (next);
}
