#include "lists.h"

/**
 * free_dlistint - function frees a dlistint_t list
 * @head: a pointer to the head of the list.
 * Return: NULL
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
