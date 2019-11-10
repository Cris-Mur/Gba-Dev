#include "lists.h"

/**
 * list_len - count a linked list
 * @h: input list
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t n;

	n = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
