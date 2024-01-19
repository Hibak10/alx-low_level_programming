#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);


}

