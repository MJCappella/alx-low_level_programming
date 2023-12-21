#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: new data input
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *atp;
	listint_t *ptr = *head;

	atp = malloc(sizeof(listint_t));
	if (!atp)
		return (NULL);

	atp->n = n;
	atp->next = NULL;

	if (*head == NULL)
	{
		*head = atp;
		return (atp);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = atp;

	return (atp);
}
