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
 * free_list - free a linked list
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
		list_t *tmp;

		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp->str);
			free(tmp);
		}
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
/**
 * print_before_main - function that print
 * a string before the main function
 * Return: nothing
 */
void print_before_main(void)
{
	list_t *head = NULL;
	const char *f_str = "You're beat! and yet, you must allow,\n";
	const char *s_str = "I bore my house upon my back!\n";

	add_node_end(&head, f_str);
	add_node_end(&head, s_str);

	while (head != NULL)
	{
		printf("%s", head->str);
		head = head->next;
	}
	free_list(head);
}
