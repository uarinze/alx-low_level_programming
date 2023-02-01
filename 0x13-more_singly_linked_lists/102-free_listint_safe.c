#include "lists.h"

size_t loop_list_count(listint_t *head);

/**
 * loop_list_count - counts the numer of
 * unique nodes
 * @head: pointer to head
 *
 * Return: numbe rof unique nodes in list
 */
size_t loop_list_count(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t
 * with a loop
 * @h: pointer to pointer to head
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes;
	size_t index;

	nodes = loop_list_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}
