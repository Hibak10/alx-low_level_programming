#include <stdio.h>
#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *free_dog - Frees the memory allocated for a dog_t struct
 *@d: Pointer to the dog_t structure to be freed
 *Return: void
 *
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
