#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *print_dog -  A function that prints struct of a dog
 *@d: A pointer to  struct dog
 *return: void
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name:(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
