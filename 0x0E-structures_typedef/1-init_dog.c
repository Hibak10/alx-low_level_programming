#include <stdio.h>
#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
