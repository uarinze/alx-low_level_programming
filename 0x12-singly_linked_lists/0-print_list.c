#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t
 * @h: argument
 *
 * Return: the number of nodes in list.
 * if str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\m");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
