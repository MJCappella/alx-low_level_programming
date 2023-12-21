#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *beh = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = beh;
		beh = *head;
		*head = next;
	}

	*head = beh;

	return (*head);
}
