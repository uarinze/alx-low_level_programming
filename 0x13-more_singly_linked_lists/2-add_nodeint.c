#include "lists.h"

/**
 * add_nodeint - adds a new node at
 * the begining of a list.
 * @head:pointer to head
 * @n: integer in node
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
