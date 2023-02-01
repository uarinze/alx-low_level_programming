#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: pointer to pointer to head
 * @idx: index where new node is to be added
 * @n: new data to add in node
 *
 * Return: address of new node
 * or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *cpy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cpy;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);
		cpy = cpy->next;
	}

	new->next = cpy->next;
	cpy->next = new;

	return (new);
}
