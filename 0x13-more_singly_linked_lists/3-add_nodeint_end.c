#include "lists.h"

/**
 * add_nodeint_end - adda a node at the
 * end of a listint_t list
 * @head: pointer to head
 * @n: integer in node
 *
 * Return: address of new node, or NULL
 * if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *lastnode;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new;
	}
	return (*head);
}
