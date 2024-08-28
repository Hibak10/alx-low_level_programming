#ifndef DOG_H
#define DOG_H
/**
 * struct dog -  A structure that stores information of a dog
 * i
 * @name: Pointer that points to the name of the dog
 * @age: Apointer to the age of the dog
 * @owner: Name of the owner
 */

struct dog
{
	char  *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
/*
 * struct dog - Struct that keeps information of  a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @wner: Owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strdpy(char *dest, char *s);
#endifi
