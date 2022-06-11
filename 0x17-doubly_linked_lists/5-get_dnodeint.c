#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns pointer to the nth node in
 * a doubly linked dlistint_t list
 * @head: a pointer to the start of the list
 * @index: an int indicating the nth node (starting at 0)
 * Return: the address of the nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0)
		return (head);

	while (index > 0 && head != NULL)
	{
		head = head->next;
		index--;
	}

	if (index != 0)
		return (NULL);

	return (head);
}
