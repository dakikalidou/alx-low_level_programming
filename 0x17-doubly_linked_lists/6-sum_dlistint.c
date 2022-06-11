#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - adds the integers stored in each node of a doubly linked
 * dlistint_t list
 * @head: a pointer to the start of the list
 * Return: returns sum of data in the list or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
