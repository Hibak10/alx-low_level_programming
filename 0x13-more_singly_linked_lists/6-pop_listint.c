#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint -  deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 *@head: Pointer to the head of the list
 *Return: Return the head node
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	curr = *head;
	data = curr->n;
	*head = curr->next;
	free(curr);
	return (data);
}

