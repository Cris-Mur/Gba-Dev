#include "lists.h"

/**
 * delete_nodeint_at_index - delete in the middle id list
 * @head: input linked list
 * @index: number of iterations in the list
 * Return: updated list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int papu;

	listint_t *temp = *head;

	listint_t *coso = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index > 0)
	{
		papu = 0;
		while (papu < index - 1)
		{
			if (temp->next == NULL)
			{
				return (-1);
			}
			temp = temp->next;
			papu++;
		}
		coso = temp->next;
		temp->next = temp->next->next;
		free(coso);
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	return (1);
}
