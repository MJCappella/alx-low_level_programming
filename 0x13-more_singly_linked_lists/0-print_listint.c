#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to output
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t ptr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ptr++;
		h = h->next;
	}

	return (ptr);
}
