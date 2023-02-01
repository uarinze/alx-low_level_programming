#include "lists.h"

/**
 * free_listint2 - frees a list and
 * sets head to null
 * @head: pointer to pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = 0;
}
