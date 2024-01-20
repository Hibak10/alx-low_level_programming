#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory ptr be allocated
 *
 * Return: pointer to the address of the ptr memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	
	if (ptr == NULL)
	
		exit(98);
	
	return ptr;
}



