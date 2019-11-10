#include "lists.h"

/**
 * listint_len - print size of list
 * @h: input linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t size;

	const listint_t *temp = h;

	size = 0;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
