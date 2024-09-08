#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - Frees a listint_t list.
 *@head: Pointer to the head list
 *Return:Nothing
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
