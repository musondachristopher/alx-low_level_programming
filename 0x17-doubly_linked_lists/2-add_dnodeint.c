#include "lists.h"

/**
 * add_dnodeint - it adds a new node at the beginning.
 * @head: a doubly linkedlist
 * @n: the value of node.
 * Return: the address of the new element
 *	or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod = malloc(sizeof(dlistint_t));

	if (!new_nod || !head)
		return (NULL);

	new_nod->n = n;
	new_nod->next = *head;
	new_nod->prev = NULL;
	if (*head)
		(*head)->prev = new_nod;

	*head = new_nod;
	return (new_nod);
}
