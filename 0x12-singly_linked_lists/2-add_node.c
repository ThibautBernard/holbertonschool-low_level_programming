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
	next->str = strdup(str);
	for (i = 0; next->str[i]; i++)
	{
	}
	next->len = i;
	next->next = *head;
	*head = next;
	return (next);
}