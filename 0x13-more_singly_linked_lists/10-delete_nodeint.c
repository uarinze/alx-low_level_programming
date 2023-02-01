#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer to head
 * @index: index of node to delete
 *
 * Return: 1 if succesful, else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *cpy = *head;
	unsigned int node;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}
	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}
