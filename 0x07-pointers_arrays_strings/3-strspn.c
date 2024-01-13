#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring consisting only of bytes
 *           from the accept string.
 * @s: The string to search.
 * @accept: The string containing the characters to include in the prefix.
 *
 * Return: The number of bytes in the initial segment of s consisting only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s && strchr(accept, *s) != NULL)
	{

		length++;
		s++;
	}

	return (length);
}

