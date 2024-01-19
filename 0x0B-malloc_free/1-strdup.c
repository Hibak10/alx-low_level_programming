#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */


char *_strdup(char *str)
{
	int len;
	int i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}


	len = strlen(str);


	duplicate = (char *) malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}

