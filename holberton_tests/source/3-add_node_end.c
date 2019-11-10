#include "lists.h"

/**
 * add_node_end - add in the end of list
 * @head: input linked list
 * @str: input string
 * Return: dir of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t n;
	list_t *temp;

	temp = *head;

	for (n = 0; str[n]; n++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	new->len = n;
	return (*head);
}
