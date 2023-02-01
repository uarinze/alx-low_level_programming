#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * linked list
 * @head: pointer to pointer to head
 *
 * Return: a pointer to the first node of
 * the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		h = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = h;
	}
	(*head)->next = prev;

	return (*head);
}
