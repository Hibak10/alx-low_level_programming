#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *j = haystack;
		char *i = needle;

		while (*haystack && *i && *haystack == *i)
		{
			haystack++;
			i++;
		}

		if (*i == '\0')
		{
			return (j);
		}

		haystack = j + 1;
	}

	return (NULL);
}

