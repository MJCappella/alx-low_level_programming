#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop
 * @head: pointer to the first node
 * Return: a new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t n;

	ptr = head;
	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		counter++;
		ptr = ptr->next;
		l_n = head;
		n = 0;
		while (n < counter)
		{
			if (ptr == l_n)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (counter);
			}
			l_n = l_n->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
