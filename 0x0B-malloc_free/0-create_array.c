#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to the  created array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	size_t i;

	if (size == 0)
	{
		return( NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{

		return (NULL);
	}

	for (i = 0; i <= size; i++)
		array[i] = c;
	
	return (array);
}

