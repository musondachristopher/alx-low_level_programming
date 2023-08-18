#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint_end - function adds a new node at the end
  *	of doubly linked list.
  * @head: head of the doubly linked list.
  * @n: the number to place in the new node
  * Return: an address of the new element,
  *	or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elemnt = NULL, *new_nod = NULL;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);
	new_nod->n = n;
	if (*head)
	{
		new_elemnt = *head;
		while (new_elemnt->next != NULL)
			new_elemnt = new_elemnt->next;

		new_nod->next = NULL;
		new_nod->prev = new_elemnt;
		new_elemnt->next = new_nod;
		return (new_nod);
	}

	new_nod->next = *head;
	new_nod->prev = NULL;
	*head = new_nod;
	return (*head);
}
