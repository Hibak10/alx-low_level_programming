#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog - Creates a new dog of type dog_t
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 *Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	dog->age = age;
	return (dog);
}
