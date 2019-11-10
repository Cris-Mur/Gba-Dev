#include "lists.h"

/**
 * free_listint - free all nodes of a linked list
 * @head: input linked lis
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint (head->next);
	}
	free(head);
}
