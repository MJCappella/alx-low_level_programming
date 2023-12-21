#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node 
 * @head: pointer to the first element 
 *
 * Return: deleted elements data
 * or NULL if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int atp;

	if (!head || !*head)
		return (0);

	atp = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (atp);
}
