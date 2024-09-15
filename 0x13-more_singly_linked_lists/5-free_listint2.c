#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - A function that frees a list of listint_t
 *and sets head to NULL
 *@head: Pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head  != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}

