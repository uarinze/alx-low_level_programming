#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the begining of a list_t
 * @head: pointer to the head of the list
 * @str: string to be added to list
 *
 * Return: the address of the new element.
 * if it fails, return NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *nstr;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	nstr = strdup(str);
	if (nstr == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = nstr;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
