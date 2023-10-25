#include <stdio.h>
#include  "main.h"
/**
 *_puts_recursion - a function that prints a string followed by a new line
 *@s: parameter
 *return 0
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
