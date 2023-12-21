#include "lists.h"

/**
 * sum_listint - calculates the sum of data in a listint_t list
 * @head: first node list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
