#include "lists.h"

/**
 * pop_listint - deletes the headnode
 * @head: pointer to poinetr to head
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
