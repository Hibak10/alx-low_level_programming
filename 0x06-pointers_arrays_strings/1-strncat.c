#include "main.h"


/**
 * _strncat - Write a function that concatenates two strings. it will use at
 * most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i  = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j > n && src[j] != '\0')
	{
		j++;
		i++;
		dest[i] = src[j];
	}

		dest[i] = '\0';
		return (dest);
}

