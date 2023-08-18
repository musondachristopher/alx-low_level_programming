#include "lists.h"
#include<stdio.h>

/**
 * sum_dlistint - function returns the sum of all the data (n)
 *	of a doubly linked list.
 * @head: head of the list
 * Return: sum of all the data if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
		data_sum += head->n;
		head = head->next;
		}
	}
	return (data_sum);
}
