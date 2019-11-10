#include "lists.h"

/**
 * print_listint - print all nodes of integer linked list
 * @h: input constant list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	const listint_t *temp = h;

	size = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		size++;
	}
	return (size);
}
