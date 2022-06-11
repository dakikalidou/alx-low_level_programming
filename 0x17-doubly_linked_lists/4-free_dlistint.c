#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked dlistint_t list
 * @head: a pointer to the start of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
