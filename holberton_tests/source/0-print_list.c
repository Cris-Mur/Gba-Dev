#include "lists.h"

/**
 * print_list - funtion that print a list
 * @h: dir of list
 * Return: size of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size;
	const list_t *temp = h;

	size = 0;
	while (temp != NULL)
	{
		temp->str ? printf("[%u] %s\n", temp->len, temp->str) :
			printf("[0] %p\n", temp->str);
		temp = temp->next;
		size++;
	}
	return (size);
}
