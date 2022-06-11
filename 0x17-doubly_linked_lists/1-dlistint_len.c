#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a linked list
 * @h: a pointer to the head of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
