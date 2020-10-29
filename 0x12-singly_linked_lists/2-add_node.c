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
 * add_node - add node at the begginning
 * @head: first node
 * @str: string to duplicate
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *next;

	next = malloc(sizeof(list_t));
	if (next == NULL)
		return (NULL);
	next->str = strdup(str);
	next->len = _strlen(str);
	next->next = *head;
	*head = next;
	return (next);
}
