#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len - Returns the number of elements in a linked listint_t list.
 *@h: Pointer to head of the list
 *Return: Number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

