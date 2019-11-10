#include "lists.h"

/**
 * sum_listint - sum all values of linked list
 * @head: inut liked list
 * Return: resuld of add all values
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum;

	sum = 0;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
