#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *print_list -  Funtion that printts all elements of list_t list
 *Return: The total number of nodes
 *@h: A pointer to the head node of alinked list
 *
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++i;
	}
	return (count);
}

