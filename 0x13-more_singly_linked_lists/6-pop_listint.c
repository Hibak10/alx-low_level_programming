#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t curr;

	if (*head == NULL)
	{
		return (0);
	}
	curr = *head;

