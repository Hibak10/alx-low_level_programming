#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len -Function to return number of nodes in a linked list_t list
 *@h: pointer to the head node of the list
 *Return: Total number of nodes in the linked list
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

