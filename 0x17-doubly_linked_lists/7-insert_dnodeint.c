#include <stdlib.h>
#include "lists.h"

/**
 * index_check - checks to see if an index position if valid
 * @head: a pointer to the start of the list
 * @idx: the index position
 * Return: 0 if position exists mid-list, 1 if exists at end of list, 2 if
 * doesn't exist
 */
int index_check(dlistint_t *head, int idx)
{
	while (idx > 0 && head != NULL)
	{
		head = head->next;
		idx--;
	}

	if (idx != 0)
		return (2);

	if (idx == 0 && head == NULL)
		return (1);

	return (0);
}

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

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: a pointer to pointer to start of the list
 * @idx: the index position of the new node
 * @n: the data to be stored in the new node
 * Return: the address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hold, *new;
	int idx_check;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		if (new == NULL)
			return (NULL);
		return (new);
	}

	idx_check = index_check(*h, idx);

	if (idx_check == 2)
		return (NULL);

	if (idx_check == 1)
	{
		new = add_dnodeint_end(h, n);
		if (new == NULL)
			return (NULL);
		return (new);
	}

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	hold = get_dnodeint_at_index(*h, idx);
	hold->prev->next = new;
	new->n = n;
	new->prev = hold->prev;
	new->next = hold;
	new->next->prev = new;

	return (new);
}
