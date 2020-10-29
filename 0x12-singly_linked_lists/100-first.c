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
 * print_before_main - function that print
 * a string before the main function
 * Return: nothing
 */
void print_before_main(void)
{
	list_t *head;
	list_t *second;
	const char *f_str = "You're beat! and yet, you must allow,\n";
	const char *s_str = "I bore my house upon my back!\n";

	head = malloc(sizeof(list_t));
	second = malloc(sizeof(list_t));
	head->str = strdup(f_str);
	head->next = second;
	head->len = _strlen(f_str);
	second->str = strdup(s_str);
	second->next = NULL;
	second->len = _strlen(s_str);

	while (head != NULL)
	{
		printf("%s", head->str);
		head = head->next;
	}
	free_list(head);
}
