#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of doubly linked list
 * @head: a pointer to pointer to start of list
 * @n: integer to be stored in new node
 * Return: address of new node or NULL if node creation failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}

	new->next = *head;
	*head = new;
	new->next->prev = new;
	return (new);
}
