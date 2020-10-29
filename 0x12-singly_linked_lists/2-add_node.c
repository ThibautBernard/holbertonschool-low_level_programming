#include "lists.h"

/**
 * add_node - add node at the begginning
 * @head: first node
 * @str: string to duplicate
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *next;

	next = malloc(sizeof(list_t));
	if (next == NULL)
		return (NULL);
	if (next != NULL && head != NULL)
	{
		if (str != NULL)
		{
			next->str = strdup(str);
			if (next->str != NULL)
			{
				for (i = 0; next->str[i]; i++)
				{
				}
				next->len = i;
				next->next = *head;
				*head = next;
			}
			else
				return (next);
		}
	}
	return (next);
}
