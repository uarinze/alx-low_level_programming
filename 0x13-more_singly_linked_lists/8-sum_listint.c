#include "lists.h"

/**
 * sum_listint - returns the sum of ll data (n)
 * of a linked list listint_t
 * @head: pointer to head
 *
 * Return: sum of all data of listint_t
 * or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
