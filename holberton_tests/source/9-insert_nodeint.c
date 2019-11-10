#include "lists.h"

/**
 * insert_nodeint_at_index - insert in the middle of the list
 * @head: input linked list
 * @idx: number of iterarion in the list
 * @n: data of the new node
 * Return: updated list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int papita;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx != 0)
	{
		papita = 0;
		while (papita < idx - 1)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				free(new);
				return (NULL);
			}
			papita++;
		}
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
