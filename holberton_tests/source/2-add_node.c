#include "lists.h"

/**
 * sizesito - this count length
 * @str: input string
 * Return: size of string
 */

unsigned int sizesito(const char *str)
{
	size_t n;

	for (n = 0; str[n] != 00; n++)
	{
	}

	return (n);
}
/**
 * add_node - generate a new nodo and add in the list
 * @head: list to modify
 * @str: input string
 * Return: list updated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		new->str = strdup(str);
	}
	else
	{
		free(new);
		return (NULL);
	}
	new->len = sizesito(str);
	new->next = *head;
	*head = new;
	return (*head);
}
