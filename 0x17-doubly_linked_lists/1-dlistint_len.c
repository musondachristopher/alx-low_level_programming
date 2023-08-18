#include "lists.h"

/**
 * dlistint_len - functn returns length of linkedlist
 * @h: doubly linkedlist
 *
 * Return: the elements number in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_element = 0;

	while (h)
		h = h->next, num_element++;

	return (num_element);
}
