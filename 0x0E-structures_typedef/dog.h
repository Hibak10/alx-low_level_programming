#ifndef DOG_H
#define DOG_H

struct dog
{
	char  *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
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
#endif
