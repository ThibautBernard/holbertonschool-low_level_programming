#include "lists.h"

/**
 * _strlen - count length of string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i])
		{
			i++;
		}
	}
	return (i);
}
/**
 * add_node_end - add node at the end
 * @head: first node
 * @str: string to duplicate
 * Return: pointer to new last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next;

	next = malloc(sizeof(list_t));
	if (next == NULL)
		return (NULL);
	if (next != NULL)
	{
		next->str = strdup(str);
		next->len = _strlen(str);
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
	return (next);
}
